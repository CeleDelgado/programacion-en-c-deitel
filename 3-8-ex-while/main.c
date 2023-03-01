/*  Figura 3-8: fig03_08.c
    Escriba un programa para calcular x a la potencia y. El programa debe tener una instrucción de repetición WHILE.
    */
#include <stdio.h>

int main()
{
    int p=1, cont=1, base, exp; //declaramos variables a utilizar
    printf("Ingrese la base: \n");
    scanf("%d", &base);
    printf("Ingrese el exponente: \n");
    scanf("%d", &exp);

    //comienza el ciclo para hallar la potencia de los valores ingresados
    while(cont<=exp){
        p*=base;
        ++cont;
    }

    printf("La potencia de %d a la %d es: %d", base, exp, p);
    return 0;
}
