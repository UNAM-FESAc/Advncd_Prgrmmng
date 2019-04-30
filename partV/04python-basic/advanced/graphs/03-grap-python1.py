from visual import *
#Creado por: Javier Orduz.
print("""
Simulacion de un sistema de cuerpos con 
fuerzas centrales.
Ejericio:
1) Complementa esta imagen con otros planetas del sistemas solar.
          Considera las leyes fisicas. Implementa rotacion y traslacion.
2) Implementa una descripcion en un widget (o documento externo).
          Explica las leyes que rigen la naturaleza.

""")


r = 3
th1 = 0.0


bal2 = sphere(radius=0.3, pos=(0, 0, 0),
            color=color.yellow, material=materials.emissive)

bal1 = sphere(radius=0.3, pos=(r, 0, 0), 
            material=materials.earth, make_trail=False, retain = 200)
lz1 = local_light(pos=bal1.pos, color=bal1.color)

while True:
    rate(100)
    lz1.pos = bal1.pos = r*vector(cos(th1), sin(th1), bal1.z)
    th1 += 0.02

