from vpython import *

r = vector(10, 10, 3)

bola=sphere(pos=r,radius=2,color=color.green)

while r.x<150:
    rate(20)
    bola.pos = r
    r.x = r.x + 10





