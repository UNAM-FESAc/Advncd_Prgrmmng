#!/usr/bin/env python
#coding=utf-8
"""
TEXTO SIN ACENTOS
Recuerda documentar tus codigos

pythonw 01window2.py
"""
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
