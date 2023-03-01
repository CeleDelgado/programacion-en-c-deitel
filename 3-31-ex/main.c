/*  Figura 3-31: fig03_31.c

    Determine la salida para cada una de las siguientes variables, cuando x es 9 y y es 11 y viceversa...
    ESTA RESUELTO LAS OPCIONES EN EL PDF
    1. IMPRIME*****
    2.IMPRIME #####
              $$$$$

    */
#include <stdio.h>

int main()
{
    int x=9, y=11;
    if(x<10){
        if(y>10){
            printf("*****\n");
            else{
                printf("#####\n");
                printf("$$$$$\n");
            }
        }
    }
    /*
    x=11
    y=9

    b. if (x<10){
        if(y>10)
            printf("*****\n));
    }
    else{
        printf("#####\n");
        printf("$$$$$\n");
    }
    */
    return 0;
}
