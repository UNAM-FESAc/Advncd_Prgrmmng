"""
TEXTO SIN ACENTOS
Recuerda documentar tus codigos

python2 00window3.py
"""

import tkinter as tk

top = tk.Tk()

top.title("Titulo chido")
top.geometry("300x300")

B = tk.Button(top, text ="Hi, Javier! What are you doing")

B.pack()

top.mainloop()
