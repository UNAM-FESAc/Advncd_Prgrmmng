"""
TEXTO SIN ACENTOS
Recuerda documentar tus codigos

raw_input() -> input()
"""

nombre = input("Como te llamas? ")
entrada = input(nombre + "," + "escribe un numero cualquiera ")   
numero = int(entrada)

if numero < 0:
	print (nombre + "," + "\tese numero es negativo")
elif numero > 0:	
	print (nombre + "," + "\tese numero es positivo")
else:
	print (nombre + "," + "\tese es el numero cero")
print('\nsalir: Presiona enter')
input()
