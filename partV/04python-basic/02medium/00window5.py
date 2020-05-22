"""
TEXTO SIN ACENTOS
Recuerda documentar tus codigos

python3 00window5.py
"""

import tkinter as tk

top = tk.Tk()
top.title("Titulo chido")
top.geometry("300x300")

lbla=tk.Label(top, text="Usuario", bg = "#a1dbcd")

entra= tk.Entry(top)

lblb=tk.Label(top, text="Contrasena")

entrb= tk.Entry(top)

btna = tk.Button(top, text ="Ingresa")
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
