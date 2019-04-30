# esta funcionando pero se tarda mucho

import pylab

principal = 10000
interestRate=0.05
years=20
values=[]
for i in range(years + 10):
	values.append(principal)
	principal+=principal*interestRate
pylab.plot(values, "ro")				#(values, cambiar a puntos)
#pylab.plot(values, linewidth=3)			#(values, cambiar el grosor de linea)

pylab.title("5% crecimiento, Anualidad", fontsize ="xx-large")
pylab.xlabel("Anos", fontsize ="x-small")
pylab.ylabel("Valor ($)")
#pylab.semilogy()					# para colocar escala logaritmica
#pylab.savefig("figure-jaod")			# para gurdar
pylab.show()					# para mostrar en pantalla
