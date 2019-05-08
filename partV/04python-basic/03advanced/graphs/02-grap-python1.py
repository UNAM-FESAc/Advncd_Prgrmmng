from visual import *

print(""" Esta es una figura con movimiento.
Se puede ajustar el tamanio de la ventana, etc.
""")

sw=scene.width = 600
sh=scene.height = 600

sce = display(title="Figura con movimiento", width = sw, height = sh,
              center=(-5,1,3))

r = vector(-5, 1, 3)
bola=sphere(pos=r,radius=2,color=color.green, opacity = 0.3)

while r.x<4:
    rate(5)
    bola.pos = r
    r.x += r.x




