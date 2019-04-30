from visual import *
from visual.graph import *


func= gdisplay(title='Funcion',xtitle='t',ytitle='f(t)', width=400,height=400)

func_color= gdots(color=color.yellow)

for t in arange(-30, 74, 1):
    func_color.plot( pos=(t, 5.0*cos(-0.03*t)*exp(0.015*t)) )

print("""
1) Realiza una investigacion sobre el modulo visual.graph.
2) Modifique los valores, las funciones y las diferentes opciones para
que su grafica describa un fenomeno de su eleccion.
"""
)
