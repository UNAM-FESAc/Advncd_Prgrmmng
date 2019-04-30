"""
vamos a crear una ventana.
Podemos crearla usando el modulo Tkinter.
1) En la primer linea importamos el modulo
2) en la segunda linea 
3) Para crear una ventana Tkinter.Tk()
4) Colocamos lo que queremos que aparezca
5) top.mainloop() Dibuja la ventana e inicia la aplicacion.


"""

import Tkinter

top = Tkinter.Tk()

B = Tkinter.Button(top, text ="Hi, Javier! What are you doing")

B.pack()

top.mainloop()

"""
Puedes revisar otros repositorios:
https://github.com/alejandroautalan/pygubu

"""
