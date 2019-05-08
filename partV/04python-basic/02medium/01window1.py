#!/usr/bin/env python
#coding=utf-8

"""
TEXTO SIN ACENTOS
Recuerda documentar tus codigos

pythonw 01window1.py
"""

import wx
 
app = wx.App(False)  # Creamos una aplicación
frame = wx.Frame(None, wx.ID_ANY, "¡Acatlán!") # Creamos un frame superior
frame.Show(True)     # Mostramos ese frame
app.MainLoop()       # Llamamos al bucle de la aplicación