"""
TEXTO SIN ACENTOS
Recuerda documentar tus codigos

python2 00window5.py
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
Cambia el orden de las siguientes lineas 
y comenta lo que sucede
"""
lbla.pack()
entra.pack()
lblb.pack()
entrb.pack()
btna.pack()
top.mainloop()
