from vpython import *


sw=scene.width = 600
sh=scene.height = 600


r = vector(-5, 1, 3)
bola=sphere(pos=r,radius=2,color=color.green, opacity = 0.3)

while r.x and r.y<400:
    rate(10)
    bola.pos = r
    r.x = r.x + 10
    r.y = r.y + 10




