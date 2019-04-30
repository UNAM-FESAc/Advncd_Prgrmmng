from visual import *
from visual.text import *

print("""
Un aviso en 3D.
1) Modifica el archivo fuente para que el texto cambie de tamanio y de grosor  (Hint: quita los comentarios)
2) Comprubebe que solamente funciona para mayusculas.
""")


scene.title = "3D Text"

text(pos=(0,3,0), string='HOLA MUNDO', color=color.blue, depth=0.3, justify='center')

message = text(pos=(0,0,0), string='PRESIONA AQUI', justify='center',
               color=color.orange, axis=(1,0,1))#,
#                depth=0.3, up=(0,1,-0.3))

scene.mouse.getclick()
message.reshape(color=color.red, height=2)
