/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <string.h>

// Creamos un tipo de dato: struct Books{Miembros} y lo etiquetamos como BOOK
typedef struct Books{
   	char title[50], author[50], subject[100];
	int book_id;
} BOOK;
 
int main( ) {

// Delaramos book del tipo BOOK
   BOOK book[2];

// Inicializamos la estructura 
   strcpy( book[0].title, "C Programming");
   strcpy( book[0].author, "Nuha Ali"); 
   strcpy( book[0].subject, "C Programming Tutorial");
   book[0].book_id = 6495407;
 
   printf( "Book title : %s\n", book[0].title);
   printf( "Book author : %s\n", book[0].author);
   printf( "Book subject : %s\n", book[0].subject);
   printf( "Book book_id : %d\n", book[0].book_id);

   return 0;
}
