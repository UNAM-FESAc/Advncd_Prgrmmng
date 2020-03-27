/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>

int main()
{

char vowels[] = {'A', 'E', 'I', 'O', 'U'};
char *pvowels = vowels;
int i;

for (i = 0; i < 5; i++) {
printf("&vowels[%d]: %p, pvowels + %d: %p\n", i, &vowels[i], i, pvowels + i);
}

for (i = 0; i < 5; i++) {
    printf("vowels[%d]: %c, *(pvowels + %d): %c\n", i, vowels[i], i, *(pvowels + i));
}
    return 0;
}