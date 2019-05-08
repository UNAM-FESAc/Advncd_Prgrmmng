from visual import *
from random import uniform

scene.range = 3

a = convex(color=(0.5,0,0))


for t in arange(0,2*pi,0.1):
    a.append(pos = (cos(t),0,sin(t)))
    a.append(pos = (cos(t),0.2,sin(t)))


p = a
p.color = (p.color[0]*2, p.color[1]*2, p.color[2]*2)
while 1:
    rate(10)
    if scene.mouse.clicked:
        c = scene.mouse.getclick()
        p.append(pos=c.pos)
    p.pos[-1] = scene.mouse.pos
