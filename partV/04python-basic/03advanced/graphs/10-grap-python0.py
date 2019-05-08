from visual import *

floor = box(pos=vector(0, -0.02, 0), size = vector(2, 0.02,0.4), color=color.yellow)
ball = sphere(pos = vector(-1,0,0), radius = 0.02, color=color.red, make_trail=True)

g = vector(0, -9, 0)
ball.m = 0.1
v0 = 4.0
theta = 60
pi = 3.14
ball.p = ball.m*v0*vector(cos(theta*pi/180),sin(theta*pi/180),0)

t =0
dt =0.001
while ball.pos.y>=0:
  rate(100)
  Fnet= ball.m*g
  ball.p= ball.p+Fnet*dt
  ball.pos =ball.pos+(ball.p/ball.m)*dt
  t+=dt
