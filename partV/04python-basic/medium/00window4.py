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

lbl=Tkinter.Label(top, text="Un mensaje")

entra= Tkinter.Entry(top)

B = Tkinter.Button(top, text ="Hi, Javier! What are you doing")

entrb= Tkinter.Entry(top)

# Cambia el orden de las siguientes linesas 
# y comenta lo que sucede
entra.pack()
B.pack()
lbl.pack()
entrb.pack()
top.mainloop()

"""
Puedes revisar otros repositorios:
https://github.com/alejandroautalan/pygubu

"""
