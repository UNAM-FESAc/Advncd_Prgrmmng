from visual import *

scene.width = 300
scene.height = 600

r = vector(-5, 1, 3)
bola=sphere(pos=r,radius=2,color=color.blue, opacity = 0.3, material = materials.earth)

while r.x<4:
    rate(2)
    bola.pos = r
    r.x += r.x




