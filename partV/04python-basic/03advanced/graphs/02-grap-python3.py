# -*- coding: utf-8 -*-
#from visual import *
from vpython import *
print("""Esta es una figura con movimiento.
Se puede ajustar el tamanio de la ventana, etc.
""")

scene.title="Esta es una figura G 2251: á, é,ñ"
scene.width = scene.height = 800
scene.center = vector(-10,15,30)
scene.background = color.gray(0.9)


r = vector(-5, 1, 3)
bola=sphere(pos=r,radius=2,color=color.blue)

while r.x<400:
    rate(5)
    bola.pos = r
    r.x = r.x +10




