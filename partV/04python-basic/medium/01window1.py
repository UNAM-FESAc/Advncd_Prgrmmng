#!/usr/bin/env python
#coding=utf-8
import wx
 
app = wx.App(False)  # Creamos una aplicación
frame = wx.Frame(None, wx.ID_ANY, "Holá Mundo") # Creamos un frame superior
frame.Show(True)     # Mostramos ese frame
app.MainLoop()       # Llamamos al bucle de la aplicación
