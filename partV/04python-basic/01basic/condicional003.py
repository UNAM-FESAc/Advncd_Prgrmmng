"""
TEXTO SIN ACENTOS
Recuerda documentar tus codigos

"""

nombre = raw_input("Como te llamas? ")
entrada = raw_input(nombre + "," + "escribe un numero cualquiera ")   
numero = int(entrada)

if numero < 0:
	print nombre + "," + "\tese numero es negativo"
elif numero > 0:	
	print nombre + "," + "\tese numero es positivo"
else:
	print nombre + "," + "\tese es el numero cero"
raw_input()
