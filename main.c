#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[31];
    char apellido[31];
    char nombreYapellido[62];


    printf("Ingrese nombre:\n");
    fgets(nombre,sizeof(nombre)-2,stdin);
    printf("Ingrese apellido:\n");
    fgets(apellido,sizeof(apellido)-2,stdin);
    strlwr(nombre);
    strlwr(apellido);
    //strupr(nombre[0]);
   // strupr(apellido[0]);
    strcat(nombreYapellido,nombre);
    strcat(nombreYapellido,apellido);
    printf("el nombre y apellido es: %s",nombreYapellido);
    return 0;
}
