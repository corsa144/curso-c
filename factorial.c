    #include <stdio.h>
    #include <stdlib.h>

   int factorial(int n)
    {
        /*int resp;
        if(n==1)
        return 1;
        resp=n* factorial(n-1);
        return (resp);*/
        /*int resp=1,i;
        for (i=n;i>0;i--){
            resp=resp*i;

        }
        return resp;*/
        int resp=n,i;
        for(i=1;i<n;i++){
            resp=resp*i;
        }
        return resp;
    }
