/*  Figura 3-25: fig03_25.c
    Escriba un programa que utilice ciclos para imprimir la siguiente tabla de valores

    N       10*N        100*N       1000*N
    1       10          100         1000
    2       20          200         2000
    3       30          300         3000
    4       40          400         4000
    5       50          500         5000
    6       60          600         6000
    7       70          700         7000
    8       80          800         8000
    9       90          900         9000
    10      100         1000        10000
*/
#include <stdio.h>

int main() //inicio de la funcion main
{
    //declaramos las vaiables a utilizar
    int cont=0, mult;
    //inicia el ciclo
    while(cont<=10){
        ++cont;
        mult=1;
        while(mult<=1000){
            cont*=mult;//1*10=10
            mult*=10; //10*10=100
            //cuando mult llega a 0 sale del ciclo
            printf("%d\t", cont);
        }
    printf("%d\t", cont);
    }

    return 0;
}
