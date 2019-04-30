/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include<stdio.h>
#include<stdlib.h>
#define n 5
struct data
{
    char name[n];
    int age;
};

int main()
{
    struct data Dat;

    FILE *pFa,*pFb;

    pFa = fopen("11-files01.txt", "a");
    pFb = fopen("11-files01.txt", "r");
    printf("Nombre y edad:");
    scanf("%s %d", Dat.name, &Dat.age);
    fprintf(pFa,"%s %d\n", Dat.name, Dat.age);
    fclose(pFa);

    do
    {
        fscanf(pFb,"%s %d\n", Dat.name, &Dat.age);
        printf("%s %d\n", Dat.name, Dat.age);
    }while(!feof(pFb));

  fclose(pFb);

return 0;
}
