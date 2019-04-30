/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

// Realizamos la declaracion rotulada de la estructura
struct punto{

	int x;
	int y;
};


// Realizamos la declaracion de la funcion que toma dos enteros 
// y regresa una estructura punto.
struct punto coordenadas(int x, int y)
{

// Declaramos la variable de estructura temp para...
struct punto temp;

// ...asignar los parametros de la funcion a 
// los miembros de la estructura.
	temp.x = x;
	temp.y = y;

return temp;
}



