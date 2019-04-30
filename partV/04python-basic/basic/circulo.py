"""
Este es un script de python para calcular 
el perimetro

python circulo.py
"""

pi = 3.1415

def area(radio):
	return pi*(radio**2)

def circunferencia(radio):
	return 2*pi*radio

print circunferencia(2)
