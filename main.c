#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[31];

    printf("Ingrese un nombre: \n");
    fflush(stdin);
    //scanf("%s",nombre);
    gets(nombre);
    printf("El nombre es: %s\n",nombre);
    return 0;
}
