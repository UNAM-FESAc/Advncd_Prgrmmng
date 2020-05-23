#!/bin/bash
from vpython import *

r = vector(-3,4,0)
ball1=sphere(pos = vector(0,0,0), radius = 0.5, color = color.green)
ball2=sphere(pos = vector(-3,4,0), radius = 0.5, color = color.cyan)
pointer=arrow(pos = vector(0,0,0), axis= r, color= color.yellow)



while r.x <20:
	rate(1)
	#sphere(pos=r,radius=0.5,color=color.cyan)
	ball2.pos = r
	r.x=r.x + 20
"""
Observa que dentro del bucle hay una linea comentada, 
quita el caracter # y observa lo que sucede.
"""

print('final del programa')


