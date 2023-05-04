#include <stdio.h>

int main()
{
    printf("Hola, Mundo!\n");
    FILE *fp = fopen("output.txt","w");
    fprintf(fp,"Hola, Mundo!\n");
    fclose(fp);
    return 0; 
}