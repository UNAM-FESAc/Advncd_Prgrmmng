# este archivo me lo hice yo solito. JAOD

nombre = raw_input("Como te llamas? ")
entrada = raw_input(nombre + "," + "\tescribe un numero cualquiera ")   
numero = int(entrada)

if numero < 0:
	print nombre + "," + "\tese numero es negativo"
elif numero > 0:	
	print nombre + "," + "\tese numero es positivo"
else:
	print nombre + "," + "\tese es el numero cero"
raw_input()
