#include "lineadetexto.h"

#include <QTreeWidget>
#include <QTimer>
#include <QHeaderView>
#include <QKeyEvent>
#include <QDateTime>

LineaDeTexto::LineaDeTexto(QWidget *parent) : QLineEdit( parent ),
                                  cantidadMaximaDeRecomendaciones( 5 ),
                                  sugerencia( LISTA ),
                                  manager( new QNetworkAccessManager( this ) )
{
    this->crearPopup();

    QStringList lista;
    lista << "Admin" << "admin";

    this->lista = lista;

    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(slot_descargaFinalizada(QNetworkReply*)));
}

LineaDeTexto::~LineaDeTexto()
{

}

void LineaDeTexto::setLista(const QStringList & newLista )
{
    this->lista = newLista;
}

void LineaDeTexto::setSugerencia(Sugerencia sugerencia)
{
    this->sugerencia = sugerencia;
}

void LineaDeTexto::crearPopup()
{
    popup = new QTreeWidget;
    popup->setColumnCount( 2 );
    popup->setRootIsDecorated( false );     // Elimina el lugar del ícono de la izquierda.
    popup->header()->hide();                // Oculta la cabecera
    popup->installEventFilter( this );

    // Esto sucedera cuando el usuario elija con enter, tab o clic del mouse la opcion que desea
    connect(popup, SIGNAL(itemClicked(QTreeWidgetItem*,int)), SLOT(slot_completarLineEdit()));

    popup->setWindowFlags( Qt::Popup );     // Para que la ventana sea estilo popup

    timer = new QTimer( this );
    timer->setSingleShot( true );
    timer->setInterval( 200 );

    // Cada 200 mseg busca coincidencias
    connect( timer, SIGNAL( timeout() ), SLOT( slot_sugerencia() ) );
    connect( this, SIGNAL(textEdited(QString)), timer, SLOT(start()) );
}

/*
Método virtual de QObject para capturar eventos de teclado y de mouse. Se lo instala
llamando al método installEventFilter(). Si este método devuelve true entonces ninguna
otra implementación de este método en clases derivadas capturará este evento.
*/

bool LineaDeTexto::eventFilter( QObject * obj, QEvent * ev )
{
    if ( obj == popup )
    {
        if ( ev->type() == QEvent::MouseButtonPress )
        {
            popup->hide();
            this->setFocus();
            return true;
        }

        if ( ev->type() == QEvent::KeyPress )
        {
            bool reconocido = false;
            int key = static_cast< QKeyEvent * >( ev )->key();

            switch ( key )
            {

            case Qt::Key_Enter:
            case Qt::Key_Tab:
            case Qt::Key_Return:
                this->slot_completarLineEdit();
                reconocido = true;
                break;

            case Qt::Key_Escape:
                this->setFocus();
                this->clear();      // Si se presiona escape entonces limpiamos.
                popup->hide();
                reconocido = true;

            case Qt::Key_Up:
            case Qt::Key_Down:
            case Qt::Key_Home:
            case Qt::Key_End:
            case Qt::Key_PageUp:
            case Qt::Key_PageDown:
                break;

            default:
                // Hace que permanezca el cursor en el QLineEdit para seguir escribiendo
                this->event( ev );
                popup->hide();
                break;
            }
            return reconocido;
        }
    }
    return false;
}

// Cuando se pulsa enter o se hace clic sobre uno de los ítems sugeridos se llama a este método para desglosar el resultado y completar el QLineEdit.

void LineaDeTexto::slot_completarLineEdit()
{
    timer->stop();
    popup->hide();
    this->setFocus();

    QTreeWidgetItem * item = popup->currentItem();

    if (item)
    {
        // Seteamos el QLineEdit con el texto del nombre del producto elegido.
        this->setText( item->text( 0 ) );
    }
}

/*
Método para sugerir los clientes según lo que se vaya ingresando en el QLineEdit.
Para hacer esto se consulta a la base de datos devolviendo un QVector<QStringList>.
*/

void LineaDeTexto::slot_sugerencia()
{
    QVector< QStringList > vectorCoincidencias;     // Almacenará las sugerencias
    QString cadenaQueEstaIngresandoElUsuario = this->text();

    if ( sugerencia == LISTA )
    {
        // Este for se encarga de encontrar las coincidencias. Se sugieren hasta cantidadMaximaDeRecomendaciones.
        for ( int i = 0, contador = 0 ; i < lista.size() && contador < this->cantidadMaximaDeRecomendaciones ; i++ )
        {

            QString palabraExtraidaDeLaBaseDeDatos = lista.at( i );

            // Aqui estan las condiciones para sugerir
            //if ( palabraExtraidaDeLaBaseDeDatos.contains( cadenaQueEstaIngresandoElUsuario, Qt::CaseInsensitive ) )
            if ( palabraExtraidaDeLaBaseDeDatos.startsWith( cadenaQueEstaIngresandoElUsuario, Qt::CaseInsensitive ) )
            {
                QStringList sugerencia;
                sugerencia << palabraExtraidaDeLaBaseDeDatos << "";
                vectorCoincidencias.push_back( sugerencia );
                contador++;
            }
        }

        // Si no existe lo que se busca se limpia el QLineEdit.
        if ( vectorCoincidencias.size() == 0 )
        {
            this->clear();
            return;
        }

        // Completa el popup con las sugerencias
        this->completarPopup( vectorCoincidencias );
    }

    else if ( sugerencia == GOOGLE )
    {
        QString str = "https://google.com/complete/search?hl=en&output=toolbar&q=" + cadenaQueEstaIngresandoElUsuario;
        manager->get( QNetworkRequest( QUrl( str ) ) );
    }
}

// Completa el QTreeWidget con el resultado de la consulta a la base de datos y lo visualiza.

void LineaDeTexto::completarPopup( QVector< QStringList > vector )
{
    popup->clear();

    for ( int i = 0 ; i < vector.size() ; ++i )
    {
        QTreeWidgetItem * item;
        item = new QTreeWidgetItem( popup );
        item->setText( 0, vector.at( i ).at( 0 ) );
        item->setText( 1, vector.at( i ).at( 1 ) );
        item->setTextAlignment( 1, Qt::AlignRight );    // Para alinear contra la derecha
    }

    popup->setCurrentItem( popup->topLevelItem( 0 ) );  // Queda seleccionado el primer elemento

    // Tolerancia para que no se cree el scroll
    int tolerancia = 3;

    // Este número 20 es la cantidad de líneas que tiene la lista desplegable
    int h = popup->sizeHintForRow( 0 ) * qMin( this->cantidadMaximaDeRecomendaciones, vector.size() ) + tolerancia;

    // El ancho del popup es igual al ancho del QLineEdit
    popup->resize( this->width(), h );

    // Lo posiciona justo abajo del QLineEdit
    popup->move( this->mapToGlobal( QPoint( 0, this->height() ) ) );

    popup->resizeColumnToContents( 0 );
    popup->resizeColumnToContents( 1 );

    popup->setFocus();
    popup->show();
}

void LineaDeTexto::slot_descargaFinalizada( QNetworkReply * reply )
{

    QByteArray ba = reply->readAll();

    QStringList listaGoogle;

    ba = ba.replace( "<?xml version=\"1.0\"?><toplevel>", "" );
    ba = ba.replace( "</toplevel>", "" );

    QString previo = "<CompleteSuggestion><suggestion data=\"";
    QString loQueSigue = "\"/></CompleteSuggestion>";

    while ( ba.contains( "CompleteSuggestion" ) )
    {
        ba = ba.remove( 0, previo.size() );

        QString sugerencia = ba.mid( 0, ba.indexOf( loQueSigue.toLocal8Bit() ) );
        listaGoogle << sugerencia;

        ba = ba.remove( 0, sugerencia.size() );

        ba = ba.remove( sugerencia.size(), loQueSigue.size() );
    }

    QVector< QStringList > vectorCoincidencias;

    for ( int i = 0 ; i < listaGoogle.size() && i < this->cantidadMaximaDeRecomendaciones ; i++ )
    {
        QStringList sugerencia;
        sugerencia << listaGoogle.at( i ) << QDateTime::currentDateTime().toString("hh:mm:ss");

        vectorCoincidencias.push_back( sugerencia );
    }

    this->completarPopup( vectorCoincidencias );

    this->lista = listaGoogle;

}

