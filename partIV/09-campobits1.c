#include <stdio.h>
#include <string.h>

struct {
// El numero indica cuantos bits se permiten 00000000. Inicia de der-izq
   unsigned int age : 4;
// Cambia el numero y observa lo que sucede.
} Age;

int main( ) {

   Age.age = 4;
   printf( "Sizeof( Age ) : %d\n", (int)(sizeof(Age)) );

   printf( "Age.age : %d\n", Age.age );

   Age.age = 7;
   printf( "Age.age : %d\n", Age.age );

   Age.age = 8;
   printf( "Age.age : %d\n", Age.age );

   Age.age = 63;
   printf( "Age.age : %d\n", Age.age );




   return 0;
}
