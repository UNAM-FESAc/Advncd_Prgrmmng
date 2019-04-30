from visual import *

sw=scene.width = 600
sh=scene.height = 600

scene.title = "Este es el titulo"

r = vector(-5, 1, 3)
bola=sphere(pos=r,radius=2,color=color.green, opacity = 0.3)

while r.x<4:
    rate(5)
    bola.pos = r
    r.x += r.x




