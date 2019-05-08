# -*- coding: utf-8 *-*
"""Editor de carta comercial con pre-formato se debe crear una carpeta 
llamada cartas"""
import datetime

import wx

from constants import *


class Editor(wx.Frame):

    def __init__(self, parent, title):
        wx.Frame.__init__(self, parent, title=title, size=(800, 600))
        self.contenido = wx.TextCtrl(self, style=wx.TE_MULTILINE,
                                     value=TEMPLATE)
        self.CreateStatusBar()  # Crea una barra de estado

        # Inicializa un menú
        filemenu = wx.Menu()

        # Crea items del menú
        menu_save = filemenu.Append(wx.ID_SAVE, MENU_GUARDAR, STATUS_GUARDAR)
        menu_about = filemenu.Append(wx.ID_ABOUT, MENU_ABOUT, STATUS_ABOUT)
        menu_exit = filemenu.Append(wx.ID_EXIT, MENU_SALIR, STATUS_SALIR)

        # Crea la barra de menú
        menubar = wx.MenuBar()
        menubar.Append(filemenu, MENU_TITLE)  # Titulo del menu
        self.SetMenuBar(menubar)  # Agrega la barra de menu al frame

        # Establece eventos
        self.Bind(wx.EVT_MENU, self.on_save, menu_save)
        self.Bind(wx.EVT_MENU, self.on_about, menu_about)
        self.Bind(wx.EVT_MENU, self.on_exit, menu_exit)

        self.Centre(True)  # Centrar la ventana en pantalla
        self.Show(True)  # Mostrar la ventana

    def on_save(self, event):
        """Guardar una carta"""
        contenido = self.contenido.GetValue()
        hoy = datetime.datetime.now()
        fecha_y_hora = hoy.strftime("%d%m%Y%H%M%S")
        filename = 'carta_del_' + fecha_y_hora + '.txt'
        ruta = 'cartas/' + filename
        archivo = open(ruta, 'w')
        archivo.write(contenido.encode("utf-8"))
        archivo.close()
        self.confirmar(filename)

    def confirmar(self, file):
        """Mostrar mensaje de confirmación al guardar una carta"""
        confirmar = CONFIRMAR + file
        dialog = wx.MessageDialog(self, confirmar, CONFIRM_TITLE, wx.OK)
        dialog.ShowModal()
        dialog.Destroy()

    def on_about(self, event):
        """Mostrar un diálogo acerca de"""
        dialog = wx.MessageDialog(self, ABOUT_CONTENT, ABOUT_TITLE, wx.OK)
        dialog.ShowModal()  # mostrar diálogo
        dialog.Destroy()  # finalizar diálogo

    def on_exit(self, event):
        """Salir del programa"""
        self.Close(True)  # Cierra la ventana


app = wx.App(False)
frame = Editor(None, APP_TITLE)
app.MainLoop()
