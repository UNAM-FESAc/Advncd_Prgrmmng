#!/usr/bin/env python
#coding=utf-8
import wx, os
 
class MainWindow(wx.Frame):
    """ Una clase personalizada de frame """
    def __init__(self, parent, title):
        wx.Frame.__init__(self, parent, title=title, size=(400,200))
        self.control = wx.TextCtrl(self, style=wx.TE_MULTILINE)
         
        self.CreateStatusBar()
         
        # Creamos el submenú Archivo
        menuArchivo = wx.Menu()
        menuAbrir = menuArchivo.Append(wx.ID_OPEN, "&Abrir"," Abrir fichero")
        menuArchivo.AppendSeparator()
        menuAcercaDe = menuArchivo.Append(wx.ID_ABOUT, "A&cerca de"," Informción del programa")
        menuSalir = menuArchivo.Append(wx.ID_EXIT,"&Salir"," Terminar el programa")
         
        # Creamos la barra del menú
        menuBar = wx.MenuBar()
        menuBar.Append(menuArchivo,"&Archivo")      
        self.SetMenuBar(menuBar)
         
        # Creamos los eventos
        self.Bind(wx.EVT_MENU, self.OnOpen, menuAbrir)
        self.Bind(wx.EVT_MENU, self.OnAbout, menuAcercaDe)
        self.Bind(wx.EVT_MENU, self.OnExit, menuSalir)
         
        self.Show(True)
     
    # Definimos los métodos de los eventos
     
    def OnAbout(self,e):
        # Creamos una ventana de diálogo con un botón de ok. wx.OK es una ID estàndard de wxWidgets.
        dlg = wx.MessageDialog( self, "Es un editor simple sin opciones", "Acerca de un Editor simple", wx.OK)
        dlg.ShowModal() # La mostramos
        dlg.Destroy() # Finalmente la destruimos
 
    def OnExit(self,e):
        self.Close(True)  # Cerramos el frame
         
    def OnOpen(self,e):
        # Podemos crear un evento extra para abrir un fichero de texto
        """ Abrir un fichero"""
        self.dirname = ''
        # Abrimos una ventana de diálogo de fichero para seleccionar algun fichero
        dlg = wx.FileDialog(self, "Elige un fichero", self.dirname, "", "*.*", wx.OPEN)
        # Si se selecciona alguno => OK
        if dlg.ShowModal() == wx.ID_OK:
            self.filename = dlg.GetFilename()   # Guardamos el nombre del fichero
            self.dirname = dlg.GetDirectory()   # Y el directorio
             
            # Abrimos el fichero en modo lectura
            f = open(os.path.join(self.dirname, self.filename), 'r')
            # Y con setValue pasamos el fichero al control de texto
            self.control.SetValue(f.read())
            f.close()   # Lo cerramos
        dlg.Destroy()   # Finalmente destruimos la ventana de diálogo
 
 
app = wx.App(False)
frame = MainWindow(None, "Editor simple")
app.MainLoop()
