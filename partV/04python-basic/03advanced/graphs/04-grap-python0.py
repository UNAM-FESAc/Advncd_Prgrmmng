from visual import *
from visual.controls import *

def cubecolor(value):
    cube.color = value
    if cube.color == color.red:
        t1.value = 0 
    else:
        t1.value = 1

w = 250
display(x=w, y=0, width=w, height=w, range=1.5, forward=-vector(1,1,0))
cube = box(color=color.red)
c = controls(x=0, y=0, width=w, height=w, range=60)
m1 = menu(pos=(0,0,0), height=7, width=25, text='Opciones')

m1.items.append(('Red', lambda: cubecolor(color.red)))
m1.items.append(('Cyan', lambda: cubecolor(color.cyan)))

       
