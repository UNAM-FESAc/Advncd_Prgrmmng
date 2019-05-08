# -*- coding: utf-8 -*-
"""
#coding=utf-8

TEXTO SIN ACENTOS
Recuerda documentar tus codigos

python(w) 01plots4.py
"""
import matplotlib as mpl
mpl.rcParams['text.usetex']=True


from pylab import *

axis([-10, 10, -12, 6])
t = arange(-10, 10, 0.1)
l1 =    -5*t +  t**2
plot(t, l1, lw=2.5, label ="$d_{1}^{}(t)$", color='green')

xlabel(r'Tiempo [T]', fontsize=18)
ylabel(r'Aceleraci{\'o}n $\frac{[L]}{[T] [T]}$', fontsize=18)
legend(loc= 0, fontsize=18)
grid(True)
show()
