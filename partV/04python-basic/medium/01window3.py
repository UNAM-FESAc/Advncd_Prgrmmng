#!/usr/bin/env python
#coding=utf-8
import wx
 
class MainWindow(wx.Frame):
    """ Una clase personalizada de frame """
    def __init__(self, parent, title):
        wx.Frame.__init__(self, parent, title=title, size=(400,200))
        self.control = wx.TextCtrl(self, style=wx.TE_MULTILINE)
        self.CreateStatusBar()  # Barra de estado en la parte inferior
        
        filemenu = wx.Menu()    # Declaramos un menú de archivo
 
        # wx.ID_ABOUT y wx.ID_EXIT son tipos estandard incluidos en wxWidgets
        # Se aconseja usar los tipos estandard para hacer la interfaz
        # más nativa -> http://docs.wxwidgets.org/stable/wx_stdevtid.html
         
        filemenu.Append(wx.ID_ABOUT, "A&cerca de"," Informción del programa")
        filemenu.AppendSeparator()  # Elemento separador para el menú
        filemenu.Append(wx.ID_EXIT,"&Salir"," Terminar el programa")
 
        menuBar = wx.MenuBar()  # Creamos la barra menú
        menuBar.Append(filemenu,"&Archivo") # Añadimos el menu de archivo a la barra
        self.SetMenuBar(menuBar)    # Añadimos la barra al frame
        self.Show(True)
 
app = wx.App(False)
frame = MainWindow(None, "Editor simple")
app.MainLoop()
