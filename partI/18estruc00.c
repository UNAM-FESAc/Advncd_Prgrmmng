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
} inventory;
