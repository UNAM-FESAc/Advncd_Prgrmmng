#!/bin/bash
from visual import *

ball0=sphere(pos = vector(0,0,0), radius = 0.2, color = color.green)
ball1=sphere(pos = vector(1,0,0), radius = 0.2, color = color.yellow)
ball2=sphere(pos = vector(0,1,0), radius = 0.2, color = color.red)
ball3=sphere(pos = vector(0,0,1), radius = 0.2, color = color.blue)

print(ball0.pos, ball0.radius, ball0.color)
print(ball0.pos, ball1.pos, ball2.pos, ball3.pos)


print('final del programa')


