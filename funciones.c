    /*Es una funcion que pide imprimir en un menu una de las opciones, luego guarda ese dato y lo retorna.*/



    int menu()
    {//3 menu
        int opcion;
        printf("Menu:\n1-Suma\n2-Resta\n3-Multiplicacion\n4-Division\n5-Factorial\n6-Salir\nSeleccione una operacion:\n");
        scanf("%d",&opcion);

        return opcion;

    }
    /* es una funcion para pedirle un numero al usuario*/

       float pedir_numero()
    {
        float numero;
        printf("Ingrese numero: " );

        scanf("%f",&numero);
        return numero;
    }
