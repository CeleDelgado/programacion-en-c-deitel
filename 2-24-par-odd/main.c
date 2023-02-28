/*  Figura 2.24: fig02_24.c
    Escriba un programa que lea un entero y que determine e imprima si es par o impar.*/
#include <stdio.h>

int main()
{
    int nro;
    printf("\nIngrese un valor entero: ");
    scanf("%d", &nro);
    //ANALIZAMOS SI ES PAR O IMPAR
    if(nro%2==0){
        printf("\nEl valor ingresado es PAR");
    }else
        printf("\nEl valor ingresasdo es IMPAR\n");

    return 0;
}
