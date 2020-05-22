"""
TEXTO SIN ACENTOS
Recuerda documentar tus codigos

python3 00window4.py
"""
import tkinter as tk
top = tk.Tk()

top.title("Titulo chido")
top.geometry("300x300")

lbl=tk.Label(top, text="Un mensaje")

entra= tk.Entry(top)


B = tk.Button(top, text ="Hi, Javier! What are you doing")

entrb= tk.Entry(top)

entra.pack()
B.pack()
lbl.pack()
entrb.pack()
top.mainloop()
