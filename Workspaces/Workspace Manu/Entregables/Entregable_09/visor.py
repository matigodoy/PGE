import cv2 

from PySide6.QtCore import *
from PySide6.QtGui import QImage, QPixmap
from PySide6.QtWidgets import QLabel

class Visor( QLabel ) :

    def __init__( self ) :
        super( Visor, self ).__init__()

        self.videoCapture = cv2.VideoCapture( 0 )

        self.timer = QTimer()

        QObject.connect( self.timer, SIGNAL( "timeout()" ), self.slot_procesar )
        self.timer.start( 10 )
        
    @Slot()
    def slot_procesar( self ) :

        if self.videoCapture.isOpened() :

            success, frame = self.videoCapture.read()

            if success != True :
                return

            h, w, ch = frame.shape
            bytesPerLine = ch * w
            
            frame = cv2.cvtColor( cv2.flip( frame, 1 ), cv2.COLOR_BGR2RGB )
            
            texto = 'Manu'
            altura = int(h/2)
            ancho = int(w/2)
            fuente = cv2.FONT_HERSHEY_TRIPLEX
            tamano = 1
            color = (255,255,255)
            grosor = 2

            frame = cv2.putText(frame, texto, (altura,ancho), fuente,tamano,color , grosor, cv2.LINE_AA)

            convertToQtFormat = QImage( frame.data, w, h, bytesPerLine, QImage.Format_RGB888 )
            im = convertToQtFormat.scaled( self.width(), self.height() )

            im = im.convertToFormat( QImage.Format_ARGB32 )

            alpha = QImage( im.width(), im.height(), QImage.Format_Alpha8 )
            alpha.fill( 210 )
            im.setAlphaChannel( alpha );

            pixmap = QPixmap.fromImage( im )            

            self.setPixmap( pixmap );

    def detener( self ) : 
        self.timer.stop()
        self.videoCapture.release()

