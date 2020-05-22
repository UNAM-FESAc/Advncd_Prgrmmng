# Notas y Ejercicios aplicados

Para esta sección, implementaremos algunas herramientas 
que el estudiante puede explorar libremente. 

La graficación en Python requiere de algunos módulos 
para el manejo de ventanas o gráficas de 
funciones matemáticas; por ejemplo: _Tkinter, 
wx_, Pylab, matplotlib_ entre otros. 

## Tkinter
Vamos a crear una ventana.

1.*00window1.py*--*00window5.py* 
	- En la primer linea importamos el modulo
	- Para crear una ventana _Tkinter.Tk()_
	- Colocamos lo que queremos que aparezca: 
		un boton, B
	- _top.mainloop()_ Dibuja la ventana e inicia 
		la aplicacion.
	-_.pack_(add) agrega los widgets a la ventana

## Ejercicio
	1. *00window4.py*
		- Cambia el orden de las 21-25
			líneas y comenta lo que sucede.
	2. *00window5.py*
		- Modifica los colores de los avisos, 
			y el fondo de la ventana.

2. *00window6.py* 
	- Personaliza el botón.	
	- Crea un nuevo botón y que realice la suma de 
		dos números ingresados en cajas de texto.

3. *01plots0.py*--*01plots6.py*
	- Realiza las gráficas (en python) de las funciones: 
	
		- $`f(\theta) = \sin{\theta}, `$
		
		- $`g(\alpha) = x^2+x\cos{x}-\sin{x}`$
		
		- Importe una lista de datos y grafiquelos desde 
			un archivo de python. 
			
		- Repórtalos en un documento realizado en 
			LaTeX con su respectivo PDF (déjalo 	
			en tu repositorio).
			
		- Investiga y realiza las funciones (en python):
			- $`h(x,y) = x^2 + y^3 - 3 x y`$
			- $`k(x,y) = x^4 - y^2 + 3 x y`$
		
		- Implementa un editor de texto simple 
			y agrega algunas funciones 
			sobre los botones. Por ejemplo:
			escribe la función en el editor de 
			texto y al presionar un botón que realice	
			u muestre la gráfica. 

4. *01window0.py*--*01window4.py* 

	- *01window2.py*	
		Este código funciona para 
		comentar
En este script de python, usamos *class, def, self y  __init__*. 

	1. *class* En esta linea creamos la clase llamada *MyFrame* y  contiene 
	el objeto wx.Frame. 
	 
	2. *def* se usa para crear métodos (funciones). Dentro de 
          __init__(self, atributo_a, atributo_b). 
          Los atributos están contenidos dentro de la clase.
          
	3. *self* es la instancia, que indica que la función necesita de los 
          atributos contenidos en la clase. Es una 
          palabra que puede ser reemplazada.
          
	4) *__init__*  es el método del constructor de la clase.
          Python reserva esta palabra para los constructores.
          Es una definición de una función que python reserva 
          para los métodos (funciones): es una función 
          que se ejecuta automáticamente cuando crea un objeto.
          Son muy útiles para automatizar tareas. Este método se 
          debe llamar cada vez que se crea una instancia de la clase.
--------------------------------
Buenas practicas:
1. Es buena practica escribir la primera letra de cada 
	palabra del nombre de la clase en mayúscula.
2. Llamar a la instancia self.
3. Definir todos los atributos de las instancias en el constructor.
--------------------------------

	- *01window4.py*
		- Implementa una función al menú Archivo -> Abrir.
		

		
# Ejercicios especiales
1. Realiza un widget que implemente una imagen 
	y personaliza los colores de tu ventana.




# Referencias

1. Puedes revisar otros repositorios:
2. https://github.com/alejandroautalan/pygubu
3. http://usingpython.com/making-widgets-look-nice/
4. https://docs.python.org/3/library/tkinter.ttk.html#ttk-widgets
5. http://effbot.org/tkinterbook/
6. https://github.com/alejandroautalan/pygubu
7. https://www.tutorialspoint.com/python/tk_button.htm
8. https://docs.anaconda.com/
9. https://anaconda.org/anaconda/wxpython 
10. https://www.eumus.edu.uy/eme/ensenanza/electivas/python/CursoPython_clase11.html

Es posible que haya olvidado algunas referencias, 
si encuentra alguna referencia o quiere aportar 
en el desarrollo de este material; envíelo al 
correo: jaorduz@comunidad.unam.mx.

<!---
consider install 

sudo apt-get install python-wxtools


Para revisar mas informacion sobre Tkinter, podemos ver
http://www.tutorialspoint.com/python/python_gui_programming.htm


*01plot3.py*
pylab.plot(values, "ro") #(values, cambiar a puntos)
#pylab.plot(values, linewidth=3)			#(values, cambiar el grosor de linea)

pylab.semilogy()					# para colocar escala logaritmica
pylab.savefig("01plots3.py")			# para gurdar


--->
