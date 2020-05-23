from vpython import *

scene.width = 800
scene.height = 600

r = vector(-5, 1, 3)
bola=sphere(pos=r,radius=2,color=color.yellow, opacity = 0.3)
#, material = materials.earth)

while r.x<150:
    rate(10)
    bola.pos = r
    r.x = r.x + 10




