/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>
#include <string.h>

struct StrFruits{
   	char name[30];
	int account;
};

struct StrPerson{
   	char name[30];
	char email[30];
};


struct StrInventory{
int date;
struct StrFruits Fruit;
struct StrPerson Provider;
};



 
int main( ) {
struct StrInventory inventory;

inventory.date = 13022019;
strcpy(inventory.Fruit.name, "naranja");
inventory.Fruit.account = 3;
strcpy(inventory.Provider.name, "Pedro Naranjas");


printf( "Frutas en el inventario %s\n", inventory.Fruit.name);
printf( "Numero de frutas en el inventario %i. Proveedor: %s\n", inventory.Fruit.account, inventory.Provider.name);
   return 0;
}
