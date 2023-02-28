/* Figura 2.5: fig02_05.c
    Programa de suma*/
#include <stdio.h>

//La funcion main inicia la ejecucion de programa
int main()
{
    int entero1; //primer numero a introducir por el usuario
    int entero2; //segundo numero a introducir por el usuario
    int suma; //variable en la que se almacenara la suma

    printf("Introdusca el primer valor entero: ");//Indicador
    scanf("%d", &entero1);//lee un entero
    printf("Introdusca el segundo valor entero: "); //Indicador
    scanf("%d", &entero2);//lee un entero
    suma=entero1+entero2;//asigna el resultado a SUMA
    printf("La suma es %d\n", suma); //Imprime la SUMA

    return 0; //Indica que el programa termino con exito
}//fin de la funcion main
