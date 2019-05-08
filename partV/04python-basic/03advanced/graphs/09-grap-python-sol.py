"""
written by Bruce Sherwood and available as an example at glowscript.org*/
scene.caption.text(Right button drag or Ctrl-drag to rotate "camera" to view scene.

Para este script se usa:

pythonw nombre.py


Ejercicio:
El estudiante debe:
1) Implmentar documentacion interna.
2) Cambiar las dimensiones de las paredes de la caja
3) Cambiar el radio de la esfera y el color

"""


from visual import *

iniciar_enter=raw_input("Presione enter para empezar")
print iniciar_enter

side = 6.0
thk = 0.3
s2 = 2*side - thk
s3 = 2*side + thk

wallR = box (pos=vector( side, 0, 0), size=vector(thk, s2, s3),  color = color.red)
wallL = box (pos=vector(-side, 0, 0), size=vector(thk, s2, s3),  color = color.red)
wallB = box (pos=vector(0, -side, 0), size=vector(s3, thk, s3),  color = color.blue)
wallT = box (pos=vector(0,  side, 0), size=vector(s3, thk, s3),  color = color.blue)
wallBK = box (pos=vector(0, 0, -side), size=vector(s2, s2, thk), color = color.gray(0.7))



ball = sphere (color = color.yellow, radius = 0.2, make_trail=False, retain=200)
ball.mass = 1.0
ball.p = vector (-0.15, -0.23, + 0.27)


side = side - thk*0.5 - ball.radius


dt = 0.3
while True:
  rate(100)
  ball.pos = ball.pos + (ball.p/ball.mass)*dt
  if not (side > ball.pos.x > -side):
    ball.p.x = -ball.p.x
  if not (side > ball.pos.y > -side):
    ball.p.y = -ball.p.y
  if not (side > ball.pos.z > -side):
    ball.p.z = -ball.p.z
"""
while true en python es un bucle que dice:
mientras verdadero sea verdadero: 
     realice algunas operaciones[cuerpo]
"""
