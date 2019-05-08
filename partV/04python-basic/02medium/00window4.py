"""
TEXTO SIN ACENTOS
Recuerda documentar tus codigos

python2 00window4.py
"""
import Tkinter

top = Tkinter.Tk()

top.title("Titulo chido")
top.geometry("300x300")

lbl=Tkinter.Label(top, text="Un mensaje")

entra= Tkinter.Entry(top)


B = Tkinter.Button(top, text ="Hi, Javier! What are you doing")

entrb= Tkinter.Entry(top)

entra.pack()
B.pack()
lbl.pack()
entrb.pack()
top.mainloop()