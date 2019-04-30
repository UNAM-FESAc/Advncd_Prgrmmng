#!/usr/bin/env python
#coding=utf-8
import wx
class MyFrame(wx.Frame):
    """ Una clase personalizada de frame """
    def __init__(self, parent, title):
        wx.Frame.__init__(self, parent, title=title, size=(400,200))
        # Control de texto multilínea
        self.control = wx.TextCtrl(self, style=wx.TE_MULTILINE)
        self.Show(True)
 
app = wx.App(False)
frame = MyFrame(None, 'Editor simple')
app.MainLoop()
"""


En este script de python, usamos class, def, self y  __init__. 
1) class. En esta linea creamos la clase llamada MyFrame y  contiene el objeto wx.Frame. Es buena practica escribir la primera letra de cada palabra del nombre de la clase en mayuscula. 
2) def se usa para crear metodos (funciones). Dentro de 
          __init__(self, atributo_a, atributo_b). 
          Los atributos estan contenidos dentro de la clase.
3) self es la instancia, que indica que la funcion necesita de los 
          atributos contenido en la clase. Es una 
          palabra que puede ser reemplazada.
4) __init__  es el metodo del constructor de la clase.
          Python reserva esta palabra para los constructores.
          Es una definicion de una funcion que python reserva 
          para los metodos (funciones): es una funcion 
          que se ejecuta automaticamente cuando crea un objeto.
          Son muy utiles para automatizar tareas. Este metodo se debe llamar cada vez que se crea una instancia de laclase.

Buenas practicas:

1) Llamar a la instancia self.
2) Definir todos los atributos de las instancias en el constructor.
"""
