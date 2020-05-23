from vpython import *

print("""Ejercicio:
1) cambia la textura de la superficie
2) cambia el color de la pelota
3) modifica el tamanio de la escena
4) Implementa un titulo que acepte el castellano  
""")

floor = box(length=4, height=0.5, width=4, color=color.blue)

ball = sphere(pos=vector(0,4,0), radius = 1)

ball.velocity = vector(0,-1,0)

dt = 0.01

while 1:
    rate(100)
    ball.pos.y = ball.pos.y + ball.velocity.y*dt
    if ball.pos.y < 1:
        ball.velocity.y = -ball.velocity.y
    else:
        ball.velocity.y = ball.velocity.y - 9.8*dt
