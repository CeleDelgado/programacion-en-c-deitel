/*  Figura 2.23: fig02_23.c
    Escriba un programa que lea cinco enteros y que despu�s imprima el n�mero m�s grande y el m�s peque�o
    del grupo. Utilice s�lo t�cnicas de programaci�n que haya  aprendido en este c�pitulo.
    */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, n4, n5, mayor=0, menor=0;
    printf("Ingrese cinco valores enteros: \n");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
    //ANALIZAMOS EL MAS GRANDE
    if(n1>n2){
        mayor=n1;
    }else
        mayor=n2;
    if(mayor>n3){
        mayor=mayor;
    }else
        mayor=n3;
    if(mayor>n4){
        mayor=mayor;
    }else
        mayor=n4;
    if(mayor>n5){
        mayor=mayor;
    }else
        mayor=n5;
    // ANALIZAMOS EL MAS PEQUE�O
    if(n1<n2){
        menor=n1;
    }else
        menor=n2;
    if(menor<n3){
        menor=menor;
    }else
        menor=n3;
    if(menor<n4){
        menor=menor;
    }else
        menor=n4;
    if(menor<n5){
        menor=menor;
    }else
        menor=n5;

    printf("\nEl MAYOR de los valores ingresados es: %d", mayor);
    printf("\nEl MENOR de los valores ingresados es: %d", menor);
    system("pause");
    return 0;
}
