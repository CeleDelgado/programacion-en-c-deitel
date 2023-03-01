/*  Figura 3-26: fig03_26
.c
    Escriba un programa que utilice ciclos para producir la siguiente tabla de valores

    A       A+2         A+4         A+6

    3       5           7           9
    6       8           10          12
    9       11          13          15
    12      14          16          18
    15      17          19          21
*/


#include <stdio.h>

int main()
{
    int vi=0,cont=0,sum=2; //declaramos las variables
    //solicitamos el valor inicial al usuario(es 3)
    printf("\nIngrese el valor inicial para comenzar el programa (3):\n ");
    scanf("%d", &vi);
    printf("A\t       A+2\t         A+4\t         A+6\n");
    //comienza el ciclo while
    while(vi<=21){
        //comienza el segundo ciclo
        while(cont<3){
            vi+=sum; //incrementamos en 2 el valor inicial
            ++cont; //como cont vale 1, vuelve a ingresar al ciclo y se repite 3 veces en total
            printf("%d\t", vi);
        }
        vi+=3; //vi pasa a valer 6 y vuelve a ingresar al ciclo
        printf("\n%d", vi);
    }
    return 0;
}
