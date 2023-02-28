/*  Figura 2.17: fig02_17.c
    Escriba un programa que imprima los numeros del 1 al 4 en la misma linea. Escriba el programa
    utilizando los siguientes metodos:
    a) Mediante una instruccion PRINTF sin especificadores de conversion
    b) Mediante una instruccion PRINTF con cuatro especificadores de conversion
    c) Mediante cuatro instrucciones PRINTF.*/
#include <stdio.h>

int main()
{
    int n1=1, n2=2, n3=3, n4=4, n_1, n_2, n_3, n_4;
    //primer metodo:
    printf("1   2   3   4\n");
    //segundo metodo
    printf("%d%d%d%d", n1, n2, n3, n4);
    //tercer metodo
    printf("\nIngrese valores del 1 al 4, los cuales se guardaran en las siguientes variables: \n");
    scanf("%d%d%d%d", &n_1, &n_2, &n_3, &n_4);
    printf("\nLos valores que se guardaron en las variables son: %d, %d, %d, %d\n", n_1, n_2, n_3, n_4);

    return 0;
}
