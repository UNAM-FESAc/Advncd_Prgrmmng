<!-- badges -->
[license-badge]: https://img.shields.io/badge/Licencia-CC-orange
[license]: https://creativecommons.org/licenses/by-nc-sa/3.0/deed.es
[![CC License][license-badge]][license]

# Laboratorio: Apuntadores y Memoria Dinámica<a name="labPtDnMmry"></a>
*by: Javier A. Orduz-Ducuara*
![width='80%'](figs/Header.jpg)


## Tabla de Contenido
1. [Informe de Laboratorio](#InfLabPDF)
2. [Ejericicios](#ejercicios)
3. [Ejercicios Especiales](#ejerciciosespeciales)
<!---4. [Referencias](#referencias)--->

### Informe de laboratorio<a name="InfLabPDF"></a>

Debes realizar un informe de laboratorio que contenga información sobre la 
lista de [ejercicios especiales](#ejerciciosespeciales) que aparecen en 
esta sección. El formato para el informe 
debe seguir el que se muestra en el siguiente archivo:
[PDF](https://www.dropbox.com/s/9taj0tx5p8s81da/gral-templete.pdf?dl=0). 
Este formato puede usarse para la entrega de diferentes reportes, incluso 
tu proyecto final. Coloca tu documento (PDF) en tu dropbox.


# Ejercicios:<a name="ejercicios"></a>


1. *00apuntador.c* -- *00apuntador01.c* y *00apuntador02.c* Recordemos el uso de un operador de memoria.
En los códigos anteriores identifica:
	- El tipo de variable.
	- Definicion de la variable.
	- Declaración de la variable.
	- Uso (llamada) de la variable.
	- Operador de direcciones de memoria
	- Acceder al valor usando un operador de asignación de memoria.
	- Declaración una variable apuntador.
	- Dirección guarda en la variable apuntador.
	- Acceder al valor usando el apuntador.
	- Operador de referencia y de deferencia.
2. *01apuntador.c*--*02apuntador.c* Realiza código que opere con tres números enteros. 
	Define tres apuntadores, tres variables de tipo float, 
	inicializar las variables en tres números, implementa las 
	cuatro operaciones aritméticas básicas y referencia. Posteriormente, 
	usa el operador de deferenciación para imprimir los resultados de 
	las operaciones. Imprime las direcciones de memoria.

3. *03apuntador.c*--*04apuntador.c* Veamos el uso del operador ++ con los apuntadores.
	- La direccion del arreglo en el apuntador
	- usando el operador ++
	- usando el operador --

4. *05apuntador.c*--*06apuntador.c* Vamos a ver un puntero a una cadena de caracteres.
	- Intenta modificarla cadena de caracteres en tiempo de ejecución.
	Responde: ¿Es posible modificar la cadena?
	<!--- Compara los dos códigos, documenta y escribe un reporte de tu actividad.--->

5. *07apuntador.c* Observa el código y reflexiona sobre la manera de obtener la dirección de memoria.
	- Asigna valores a las variables e inicializa el apuntador.
	- solicita la dirección de memoria de todas las variables, usa las líneas dadas.

6. *08ptr-opr.c* Programa para mostrar la inicializacion de un puntero e indireccion.

7. *09ptr-opr.c* Modifica el código para que en la salida 
	-se observen dos columnas: una con el alfabeto en mayúsculas; y la otra en minúsculas.
8. *10ptr-arry.c* (y todos los *10XXXX.c*) Observar el código y responde:
	- [X] Un nombre de un arreglo contiene la dirección del primer elemento del arreglo.
	- [ ] Un nombre de un arreglo no contiene la dirección del primer elemento del arreglo.
	- [ ] Un nombre de un arreglo contiene la indirección del primer elemento del vector.
	- [ ] Un nombre de un arreglo contiene la dirección del primer elemento del puntero.

9. *11ptr-arry.c* Un puntero que se indirecciona para 
	obtener los valores de otras variables.

10. *12ptr-arry.c* En el siguiente programa se demuestra que __&ArrayName[i]__ 
	es equivalente a __ArrayName+i__; y que __Array[i]__ es equivalente a __*(ArrayPtr + i)__.
	- Realiza los cambios mencionados y observa qué sucede y explica por qué.

11. *13ptr-arry.c* Acceso a los datos de un arreglo de tipo __char__ usando el operador de indirección. 
	- Realiza los cambios que se mencionan en el enunciado 10.
 	
	Es importante que revises los conceptos que están alrededor de:
	- Un código con arreglos como apuntadores de tipo __char__
	- Los ejemplos de un vector, usando un arreglo y su relación con los apuntadores.
	- *13ptr-arry01.c*--*13ptr-arry02.c*
		- Inicializa el apuntador en otro elemento. ¿Qué sucede?
		- Realiza los cambios sugeridos en el inciso 10.
		- Realiza las tablas de multiplicar usando un arreglo, una estructura iterativa	
		y las relaciones entre arreglos y apuntadores discutidos hasta este momento.
	-*13ptr-arry03.c* Implementa:
		- Otras formas de obtener las direcciones de memoria y los 
		valores contenidos (vocales) en las variables.
		- Las vocales en minúsculas y sus valores en código ascii.

12. *14ptr-arry.c* Modifica el código:
	- Implementa una varialbe de estructura como un apuntador.
	- Inicializa los valores en los datos que se muestran.
	- Modifica el código para que se soliciten los datos por terminal.
	- Has que se guarden en un archivo externo (binario o de texto).
	- Llena el archivo con datos de tus familiares, al menos cuatro.
	Los datos que deben aparecer son: nombre completo, edad, fecha de nacimiento,
	cuenta de facebook, twitter, domicilio, situación civil (casado, soltero, etc).

13. *15ptr-func-array.c*  Modifica el código para que 
	- Calcule la suma, la resta y la division del mismo numero N veces, 
	donde N sera un numero dado por terminal. 
	Ayuda: implemente diferentes funciones con apuntadores. 
	- Implementa un archivo externo donde se guarde la información.
	- Escribe un código que:
		- Implemente estructuras, typedef, enum o union.
		- Tome un polinomio de cuarto grado, o mayor.
		- Evalue la función, las derivadas e imprima los resultados en un archivo 
		externo en forma de columnas.

14. *16ptr-func-array.c* -- *17str-pointer.c*
	- Realiza los mismos ejercicios del enunciado **13.** implementando apuntadores y 
	funciones (y paso por referencia) creadas por el usuario.
	- Escribe un código que implemente datos de tipo **char**, estructuras, funciones 
	con argumentos como apuntadores y que guarde datos en un archivo externo.
	- Implemente arreglos, apuntadores, y los operadores relacionados, para 
	enviar información a un archivo externo. Cree una código que organice (solamente una 
	de las siguientes ideas): música, libros, juguetes, tareas, u otras cosas.
	Al final debe obtener un archivo de salida.

15. *18ptr-2-ptr.c*--*19ptr-2-ptr.c* Apuntadores dobles. 
	Observa y discute sobre los conceptos que se implementan en los códigos.


16. *20ptr-2-ptr.c* Usando apuntadores dobles, 
	escribe un código que tome una cadena de caracteres e intercambie la 
	primera con la última vocal.


17.  *21malloc-ptr.c*--*23malloc-ptr01.c* 
	- Cambia el valor de __n__ y comenta tu análisis.
	- Introduce otra variable de tipo __char__ e implementa la 
	función __malloc()__.
	- Escriba un programa que realice las cuatro operaciones aritméticas básicas.
	Implemente la función malloc.


___

IMPORTANTE:
Si el sistema operativo no puede asignar mas 
memoria para el programa, malloc() fallara 
y regresara un valor NULL. 
Aconsejable para asegurarse que la funcion malloc es exitosa.

___


18. *24calloc-ptr00.c*--*24calloc-ptr02.c*
	- Modifica la función __calloc()__ para que se convierta en __malloc()__. Resalta las diferencias.
	- Modifica el código para que agregue 4 B para cada iteración y que agregue un 
	tipo de dato entero en cada ciclo. Al final debe sumar todos los elementos del arreglo. 

19. *25mallocrealloc00.c*--*25mallocrealloc03.c*
	- Implementa una las funciones __malloc()__ y __realloc()__ para que una 
	tienda de abarrotes almacene los productos. Implemente __struct__, 
	__typedef__ y apuntadores, además de otros conceptos discutidos en clase.
	- Realice un código que realice operaciones: derivadas, integrales u 
	operaciones aritméticas básicas; muestre sus habilidades para gestionar 
	la memoria en tiempo de ejecución.


20. *27m-c-re-alloc-free.c*
	- Implementa la división.


21. *28-ptr-onearray-00.c*--*28-ptr-onearray-01.c* 
	-Reflexiona sobre la salida de este codigo y 
	comenta este codigo basado en tu investigación 
	sobre apuntadores y arreglos unidimensionales.



22. *29-ptr-multarray.c* Modifica el código:

	- revisa lo que sucede cuando reemplazamos __( * ( * (i + r) + c))__   por __i[r][c]__.
	- Implementa una función -- realloc() -- para realizar ajustes 
	en los tamaños de las matrices.

 


# Ejercicios Especiales<a name="ejerciciosespeciales"></a>

1. Realiza la [lectura](https://www.dropbox.com/s/2csklifcl9k8s0m/02pointers.pdf?dl=0) (revisa 
la carpeta de actividades) y realiza un reporte.

## Agradecimientos

- El código del inciso 20 fue compartido por: 
Kevin Josue Fernandez Mendoza y 
Betancourt Ramirez Diego Esteban del grupo de programación II.
- Hay aportes de otros estudiantes que por diferetens razones no aparecen de forma 
explícita, a ellos agradezco mucho.


<!--- /* 23malloc
Ejercicios:
- Implemente documentacion interna sobre el codigo.
- El estudiante debe reemplazar malloc por calloc y 
comentar sus resultados.

24 implemente documentacion interna.


25 
/*
Tarea:
Implemente este codigo para calcular el numero mas chico
*/

/*
Programa implementado de:
https://www.programiz.com/c-programming/examples
/dynamic-memory-allocation-largest
*/



*/
--->
