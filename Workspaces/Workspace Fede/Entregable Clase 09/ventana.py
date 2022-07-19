import sys

from PySide6.QtCore import QObject
from PySide6.QtGui import *
from PySide6.QtWidgets import QWidget, QApplication, QSizePolicy, QGridLayout

import tkinter as tk

import visor  

class Ventana( QWidget ) :
    def __init__( self ) :
        super( Ventana, self ).__init__()

        self.visor = visor.Visor()

        # Para que se mantenga en top y para ventana sin bordes.
        self.setWindowFlags( Qt.WindowStaysOnTopHint | Qt.FramelessWindowHint )  
        self.setAttribute( Qt.WA_TranslucentBackground, True )  # Hace transparente el color gris de los widgets

        grid = QGridLayout()
        grid.setContentsMargins( 0, 0, 0, 0 )
        grid.addWidget( self.visor )
        self.setLayout( grid )
     
    def keyPressEvent( self, e ) :
       if e.key() == Qt.Key_Escape :
            self.close()

    def closeEvent( self, e ) :
        self.visor.detener()        

if __name__ == '__main__':
    app = QApplication( sys.argv )

    root = tk.Tk()
    screen_w = root.winfo_screenwidth()
    screen_h = root.winfo_screenheight()  

    ventana = Ventana()

    ancho_imagen_camara = 320
    alto_imagen_camara = 240
    ventana.resize( ancho_imagen_camara, alto_imagen_camara )

    ventana.move( screen_w - ancho_imagen_camara, screen_h - alto_imagen_camara )
    ventana.show()

    sys.exit( app.exec() )