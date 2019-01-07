#include <stdio.h>
int main()
{
   int num_cta;
   FILE *fptr;

   if ((fptr = fopen("14-files-in.txt","r")) == NULL)
   {
       printf("Error: archivo inexistente");
   }
    fscanf(fptr, "%d", &num_cta);
    printf("Numero de cuenta: %d\n", num_cta);
    fclose(fptr);
    return 0;
    }    
    
