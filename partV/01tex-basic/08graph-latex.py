from pyx import *
from pyx.metapost.path import beginknot, endknot, smoothknot, tensioncurve


p1, p2, p3, p4= (0, 0), (2, 0.8), (5, 2.5), (2.5, 2)
p5, p6, p7, p8= (2.6, 0), (5, 0.8), (6, 0.5), (6, 1.5)

closedpath = metapost.path.path([
    smoothknot(*p1),tensioncurve(7.5),
    smoothknot(*p2), tensioncurve(3.5),
    smoothknot(*p3), tensioncurve(2.5),
    smoothknot(*p4), tensioncurve(7.5)
])

openpath1 = metapost.path.path([beginknot(*p5), tensioncurve(.5),  endknot(*p8)])

c = canvas.canvas()

l1=path.line(8, 1.5, 6, 1.5)

c.stroke(l1, [style.linewidth.thick,style.linestyle.dashed, color.rgb.blue])

c.stroke(path.line(7, 1, 6, 1),
         [style.linewidth.thick,
           style.linestyle.dashed, color.rgb.blue,
           deco.earrow([deco.stroked([color.rgb.blue,
           style.linejoin.round]), deco.filled([color.rgb.blue])],
           size=0.1)])

c.stroke(closedpath, [trafo.translate(2, 0), style.linewidth.THick, color.rgb.red])

c.stroke(openpath1, [style.linewidth.thick,style.linestyle.dashed, color.rgb.blue])

c.text(6, .45, r"$\vec{v}(t)$")

c.writeEPSfile("figs/imagen")

print r'\includegraphics[scale=1]{figs/imagen}'

