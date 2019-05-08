# -*- coding: utf-8 -*-
from visual import *

print("""Esta es una figura con movimiento.
Se puede ajustar el tamanio de la ventana, etc.
""")

scene.title="Esta es una figura: á, é,ñ"
scene.width = scene.height = 400
scene.center = (-10,15,30)



r = vector(-5, 1, 3)
bola=sphere(pos=r,radius=2,color=color.green, opacity = 0.3)

while r.x<4:
    rate(5)
    bola.pos = r
    r.x += r.x




