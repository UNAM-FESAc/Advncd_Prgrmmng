from visual import *
from visual.graph import *



histo = gdisplay(title='Histrograma',xtitle='bin',ytitle='Numero de repeticiones', x=0, y=400, width=800,height=400)
datalist1 = [5, 37, 12, 21, 25, 28, 8, 63, 52, 75, 7]
#datalist2 = [10, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
data = ghistogram(bins=arange(0, 15, 2), color=color.red)
data.plot(data=datalist1)
#datalist2 = [7, 23, 25, 72, -15]
#data.plot(data=datalist2, accumulate=1)

print("""
Ejercicio:
1) Modifique el codigo para obtener un histograma de un fenomeno real.
2) Realice un informe corto de su trabajo y resultados.
""")
