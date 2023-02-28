/*  Figura 2.26: fig02_26.c
    Escriba un programa que lea dos enteros y que determine e imprima si el primero es múltiplo del segundo.*/
#include <stdio.h>


int main()
{
    int n1, n2;
    printf("Ingrese dos valores enteros: ");
    scanf("%d%d", &n1, &n2);
    if(n1%n2==0){
        printf("\nEl primer valor ES MULTIPLO del segundo. ");
    }else
        printf("\nNO ES MULTIPLO.");
    return 0;
}
