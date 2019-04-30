/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>

int main()
{

char vowels[] = {'A', 'E', 'I', 'O', 'U'};
char *pvowels = vowels;
int i;

for (i = 0; i < 5; i++) {
printf("&vowels[%d]: %p, vowels + %d: %p\n", i, &vowels[i], i, vowels + i);
}

for (i = 0; i < 5; i++) {
    printf("vowels[%d]: %c, *(vowels + %d): %c\n", i, vowels[i], i, *(vowels + i));
}
    return 0;
}
