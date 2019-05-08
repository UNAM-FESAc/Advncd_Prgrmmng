from visual import *

r = vector(50, 10, 3)

bola=sphere(pos=r,radius=2,color=color.green)

while r.x<20:
    rate(3)
    bola.pos = r
    r.x += r.x





