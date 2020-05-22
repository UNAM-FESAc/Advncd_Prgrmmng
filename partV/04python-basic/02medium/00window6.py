"""
TEXTO SIN ACENTOS
Recuerda documentar tus codigos

python3 00window6.py
"""

import tkinter as tk
from tkinter import messagebox
#import tkMessageBox

top = tk.Tk()

def helloCallBack():
    messagebox.showinfo( "Hello Javier Orduz", "Hello how are you, Javier?")


B = tk.Button(top, text ="Hi, Javier! What are you doing", command = helloCallBack)

B.pack()

top.mainloop()
