"""
TEXTO SIN ACENTOS
Recuerda documentar tus codigos

python2 00window3.py
"""

import Tkinter

top = Tkinter.Tk()

top.title("Titulo chido")
top.geometry("300x300")
B = Tkinter.Button(top, text ="Hi, Javier! What are you doing")

B.pack()

top.mainloop()
