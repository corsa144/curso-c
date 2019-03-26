    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {

        int valor,result;
        printf("\nIngrese numero:");
        scanf("%d",&valor);
        result=factorial(valor);
        printf("\nEl factorial de %d es %d",valor,result);
        return 0;
    }


