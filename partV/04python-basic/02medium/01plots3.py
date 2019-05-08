"""
TEXTO SIN ACENTOS
Recuerda documentar tus codigos

python(w) 01plots3.py
"""


import pylab

principal = 10000
interestRate=0.05
years=20
values=[]
for i in range(years + 10):
	values.append(principal)
	principal+=principal*interestRate
pylab.plot(values, "ro")
pylab.title("5% crecimiento, Anualidad", fontsize ="xx-large")
pylab.xlabel("Años", fontsize ="x-small")
pylab.ylabel("Valor ($)")
pylab.show()
