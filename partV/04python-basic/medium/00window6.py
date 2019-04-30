"""
vamos a crear una ventana usando un boton

"""

import Tkinter
import tkMessageBox

top = Tkinter.Tk()

def helloCallBack():
    tkMessageBox.showinfo( "Hello Javier Orduz", "Hello how are you, Javier?")


B = Tkinter.Button(top, text ="Hi, Javier! What are you doing", command = helloCallBack)

B.pack()

top.mainloop()
