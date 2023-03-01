/*  Figura 3-23: fig03_23.c
    Escriba un programa que utilice un ciclo para imprimir los numeros del 1 al 10 dentro
    de la misma linea, separados cada uno por tres espacios en blanco

    1___2___3___(...)
*/
#include <stdio.h>

int main()
{
    int cont=0;
    printf("Ingrese 0 para comenzar el programa: ");
    scanf("%d", &cont);
    //comienza el ciclo
    while (cont<11){

        printf("%d \t", cont);

        ++cont;//incrementamos el contador
        //el ciclo vuelve a repetirse mientras que cont<11
    }
    return 0;
}
