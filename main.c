#include <stdio.h>
#include <stdlib.h>

#define QTY_EDADES 5
#define MAX 5

/*int initArrayInt (edades,QTY_EDADES,22);*/

//int getArrayInt (int *pArray,int limite,char *pMensaje,char *pMensajeError);

int printArrayInt(int *pEdades, int cantidadUsuario);
int sueldoInit(float sueldo[],int *pEdades);

int main()
{
    int *pEdades [QTY_EDADES] ={100 ,20 ,30, 40,50};
    int cantidadUsuario = QTY_EDADES;

    int i,leg;
    float sueldo[MAX],suma=0,prom,aux;
    char seguir;

    //initArrayInt (edades,QTY_EDADES,22);

    //cantidadUsuario =getArrayInt(edades,QTY_EDADES,"Edad?\n","ERROR");

    leg=printArrayInt(*pEdades,cantidadUsuario);
    sueldo[MAX]=sueldoInit(sueldo,*pEdades);

    return 0;
}

/*int initArrayInt (edades,QTY_EDADES,22)
{
    int retorno=-1;
    int i;

    for(i=0;edades<QTY_EDADES;i++)
    {

    }

    return retorno;

}*/

/*int getArrayInt (int *pEdades,int limite,char *pMensaje,char *pMensajeError)
{
    int retorno=-1;
    int i;

    for(i=0;pEdades<QTY_EDADES;i++)
    {
        printf(pEdades);
        retorno=0;
    }

    return retorno;

}
*/

int printArrayInt(int *pEdades,int cantidadUsuario)
{
    int retorno=-1;
    int i;

    for(i=0;cantidadUsuario<QTY_EDADES;i++)
    {
        printf("%d",&pEdades[i]);
        retorno=0;
    }

    return retorno;

}

int sueldoInit(float sueldo[],int *pEdades)
{
    float aux;
    int i;
    char seguir;
    for(i=0;i<MAX;i++)
    {
        *pEdades=0;
        sueldo[i]=0;
    }
    do
    {
        printf("Ingrese el sueldo");
        scanf("%f",&aux);
        sueldo[i]=aux;
        printf("Desea ingresar otro dato S/N?");
        scanf("%c",&seguir);
    }while(seguir=='s');
    return 0;
}
