#!/usr/bin/env python
#coding=utf-8
import wx, os
 
class MainWindow(wx.Frame):
    """ Una clase personalizada de frame """
    def __init__(self, parent, title):
         
        # El "-1" en el parámetro de tamaño indica a wxWidgets un tamaño por defecto
        # En este caso, seleccionamos 400px de anchura y una altura por defecto
        wx.Frame.__init__(self, parent, title=title, size=(600,600))
        self.control = wx.TextCtrl(self, style=wx.TE_MULTILINE)
         
        self.CreateStatusBar()
         
        menuArchivo = wx.Menu()
        menuAbrir = menuArchivo.Append(wx.ID_OPEN, "&Abrir"," Abrir fichero")
        menuArchivo.AppendSeparator()
        menuAcercaDe = menuArchivo.Append(wx.ID_ABOUT, "A&cerca de"," Informción del programa")
        menuSalir = menuArchivo.Append(wx.ID_EXIT,"&Salir"," Terminar el programa")
         
        menuBar = wx.MenuBar()
        menuBar.Append(menuArchivo,"&Archivo")      
        self.SetMenuBar(menuBar)
         
        self.Bind(wx.EVT_MENU, self.OnOpen, menuAbrir)
        self.Bind(wx.EVT_MENU, self.OnAbout, menuAcercaDe)
        self.Bind(wx.EVT_MENU, self.OnExit, menuSalir)
         
        # Creamos un sizer o "calibrador", que es un contenedor para los elementos del frame
        # El tipo wx.HORIZONTAL indica un sizer horizontal
        self.sizer2 = wx.BoxSizer(wx.HORIZONTAL)
         
        # Ahora vamos a declarar 6 botones con un bucle for
        self.buttons = []   # Empezamos con un arreglo vacío
        for i in range(0, 6):
            # A lo largo del bucle vamos anidando objetos de tipo wx.Button
            self.buttons.append(wx.Button(self, -1, "Boton "+str(i)))
            # Y los añadimos al sizer en modo EXPAND para que se adapte al tamaño del sizer
            self.sizer2.Add(self.buttons[i], 1, wx.EXPAND)
 
        # Usemos algunos sizers para ver el layout o "disposición" de los objetos
        self.sizer = wx.BoxSizer(wx.VERTICAL)   # Declaramos uno de tipo vertical
        self.sizer.Add(self.control, 1, wx.EXPAND)  # Le añadimos el control de texto
        self.sizer.Add(self.sizer2, 0, wx.EXPAND)   # Y después el sizer2 horizontal
 
        # Finalmente tenemos que indicarle a nuestra app que utilize el sizer por defecto
        self.SetSizer(self.sizer)
         
        self.SetAutoLayout(1)   # Con SetAutoLayout le decimos a la ventana que
                                # use el sizer para dar tamaño a los componentes
                                 
        self.sizer.Fit(self)    # Y Fit le indica al sizer que ajuste el tamaño a su contenido
         
        self.Show(True)
     
    def OnAbout(self,e):
        dlg = wx.MessageDialog( self, "Es un editor simple sin opciones", "Acerca de un Editor simple", wx.OK)
        dlg.ShowModal()
        dlg.Destroy()
 
    def OnExit(self,e):
        self.Close(True)
         
    def OnOpen(self,e):
        # Podemos crear un evento extra para abrir un fichero de texto
        """ Abrir un fichero"""
        self.dirname = ''
        dlg = wx.FileDialog(self, "Elige un fichero", self.dirname, "", "*.*", wx.OPEN)
        if dlg.ShowModal() == wx.ID_OK:
            self.filename = dlg.GetFilename()
            self.dirname = dlg.GetDirectory()
            f = open(os.path.join(self.dirname, self.filename), 'r')
            self.control.SetValue(f.read())
            f.close()
        dlg.Destroy()
 
 
app = wx.App(False)
frame = MainWindow(None, "Editor simple")
app.MainLoop()
