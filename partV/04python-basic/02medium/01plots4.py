# -*- coding: utf-8 -*-
"""
#coding=utf-8

TEXTO SIN ACENTOS
Recuerda documentar tus codigos

python 01plots4.py
"""

import matplotlib.pyplot as plt
import numpy as np
plt.rcParams['text.usetex']=True

t = np.linspace(-10, 10, 50)
l1 =    -5*t +  t**2

plt.figure()
plt.plot(t, l1, lw=2.5, label =r"$d_{1}^{}(t)$", color='green')

plt.xlabel(r'Tiempo [T]', fontsize=18)
plt.ylabel(r'Aceleraci{\'o}n $\frac{[L]}{[T] [T]}$',fontsize=18)
plt.legend(loc= 0, fontsize=18)
plt.grid(True)
plt.show()


# https://www.eumus.edu.uy/eme/ensenanza/electivas/python/CursoPython_clase11.html
