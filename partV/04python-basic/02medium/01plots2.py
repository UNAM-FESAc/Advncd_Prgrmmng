"""
TEXTO SIN ACENTOS
Recuerda documentar tus codigos

pythonw 01plots2.py
"""
import pylab

pylab.figure(1)
pylab.plot([1,2,3,4],[1,7,3,5])
pylab.figure(2)
pylab.plot([1,4,2,3],[5,6,7,8])
pylab.savefig("02plots0.png")
pylab.figure(1)
pylab.plot([5,6,10,3])
pylab.savefig("02plots1.png")

pylab.show()
