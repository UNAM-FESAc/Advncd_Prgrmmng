from __future__ import division, print_function
from visual import *
import wx


def setleft(evt): # called on "Rotate left" button event
    cube.dir = -1

def setright(evt): # called on "Rotate right" button event
    cube.dir = 1

def setred(evt): # called by "Make red" menu item
    cube.color = color.red
    t1.SetSelection(0) # set the top radio box button (red)

def setcyan(evt): # called by "Make cyan" menu item
    cube.color = color.blue
    t1.SetSelection(1) # set the bottom radio box button (cyan)

def togglecubecolor(evt): # called by radio box (a set of two radio buttons)
    choice = t1.GetSelection()
    if choice == 0: # upper radio button (choice = 0)
        cube.color = color.red
    else: # lower radio button (choice = 1)
        cube.color = color.blue

def cuberate(value):
    cube.dtheta = 2*value*pi/1e4
    
def setrate(evt): # called on slider events
    value = s1.GetValue()
    cuberate(value) # value is min-max slider position, 0 to 100

L = 450
w = window(width=2*(L+window.dwidth), height=L+window.dheight+window.menuheight,
           menus=True, title='Widget en 3D')

# Place a 3D display widget in the left half of the window.
d = 20
display(window=w, x=d, y=d, width=L-2*d, height=L-2*d, forward=-vector(0,1,2))
cube = sphere(color=color.red, material=materials.earth)

p = w.panel # Refers to the full region of the window in which to place widgets

wx.StaticText(p, pos=(d,4), size=(L-2*d,d), label='Un dibujo de un objeto en 3D',
              style=wx.ALIGN_CENTRE | wx.ST_NO_AUTORESIZE)

left = wx.Button(p, label='Rotar izquierda', pos=(L+10,15))
left.Bind(wx.EVT_BUTTON, setleft)

right = wx.Button(p, label='Rotar derecha', pos=(1.5*L+10,15))
right.Bind(wx.EVT_BUTTON, setright)

t1 = wx.RadioBox(p, pos=(1.0*L,0.3*L), size=(0.25*L, 0.25*L),
                 choices = ['Rojo', 'Azul'], style=wx.RA_SPECIFY_ROWS)
t1.Bind(wx.EVT_RADIOBOX, togglecubecolor)

# for MAC
tc = wx.TextCtrl(p, pos=(1.4*L,90), value='Escribe algo:\n',
            size=(150,90), style=wx.TE_MULTILINE)
tc.SetInsertionPoint(len(tc.GetValue())+1) # position cursor at end of text
tc.SetFocus() # so that keypresses go to the TextCtrl without clicking it

s1 = wx.Slider(p, pos=(1.0*L,0.8*L), size=(0.9*L,20), minValue=0, maxValue=100)
s1.Bind(wx.EVT_SCROLL, setrate)
wx.StaticText(p, pos=(1.0*L,0.75*L), label='Ajuste velocidad de rotacion:\n')

m = w.menubar # Refers to the menubar, which can have several menus

menu = wx.Menu()
item = menu.Append(-1, 'Rotate left', 'Make box rotate to the left')
w.win.Bind(wx.EVT_MENU, setleft, item)

item = menu.Append(-1, 'Rotate right', 'Make box rotate to the right')
w.win.Bind(wx.EVT_MENU, setright, item)

item = menu.Append(-1, 'Make red', 'Make box red')
w.win.Bind(wx.EVT_MENU, setred, item)

item = menu.Append(-1, 'Make cyan', 'Make box cyan')
w.win.Bind(wx.EVT_MENU, setcyan, item)

# Add this menu to an Options menu next to the default File menu in the menubar
m.Append(menu, 'Options')

# Initializations
s1.SetValue(70) # update the slider
cuberate(s1.GetValue()) # set the rotation rate of the cube
cube.dir = -1 # set the rotation direction of the cube

while True:
    rate(100)
    cube.rotate(axis=(0,1,0), angle=cube.dir*cube.dtheta)
       
