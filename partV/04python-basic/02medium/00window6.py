"""
TEXTO SIN ACENTOS
Recuerda documentar tus codigos

python2 00window6.py
"""

import Tkinter
import tkMessageBox

top = Tkinter.Tk()

def helloCallBack():
    tkMessageBox.showinfo( "Hello Javier Orduz", "Hello how are you, Javier?")


B = Tkinter.Button(top, text ="Hi, Javier! What are you doing", command = helloCallBack)

B.pack()

top.mainloop()
