"""
vamos a crear una ventana.
Podemos crearla usando el modulo Tkinter.
1) En la primer linea importamos el modulo
2) en la segunda linea 
3) Para crear una ventana Tkinter.Tk()
4) Colocamos lo que queremos que aparezca: un boton, B
5) top.mainloop() Dibuja la ventana e inicia la aplicacion.
6) .pack (add) agrega los widgets a la ventana
Observa que colocamos titulo y cambiamos las dimensiones
"""

import Tkinter

top = Tkinter.Tk()

top.title("Titulo chido")
top.geometry("300x300")

lbla=Tkinter.Label(top, text="Usuario", bg = "#a1dbcd")

entra= Tkinter.Entry(top)

lblb=Tkinter.Label(top, text="Contrasena")

entrb= Tkinter.Entry(top)

btna = Tkinter.Button(top, text ="Ingresa")
"""
Cambia el orden de las siguientes linesas 
y comenta lo que sucede
"""
lbla.pack()
entra.pack()
lblb.pack()
entrb.pack()
btna.pack()


top.mainloop()

"""
Puedes revisar otros repositorios:
https://github.com/alejandroautalan/pygubu
http://usingpython.com/making-widgets-look-nice/
https://docs.python.org/3/library/tkinter.ttk.html#ttk-widgets
http://effbot.org/tkinterbook/
"""
