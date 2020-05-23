#!/usr/bin/env python
#coding=utf-8
"""
TEXTO SIN ACENTOS
Recuerda documentar tus codigos

python 01plots6.py


"""

import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(-10, 10, 10)
y1, y2 = (x ** 2, x**3-10)

plt.subplot(1,2,1)
plt.plot(x, y1, 'r--')
plt.subplot(1,2,2)
plt.plot(x, y2, 'g*-');
plt.show()

