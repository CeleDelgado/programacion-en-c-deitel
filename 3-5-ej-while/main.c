/*  Figura 3-5: fig03_05.c
    Calcule la suma de los enteros del 1 al 10. Utilice la instrucci�n while para hacer un ciclo con las instrucciones
    para el c�lculo y el incremento. El ciclo deber� terminar cuando el valor de x sea 11.
    */
#include <stdio.h>

int main() // Inicio de la funcion main
{
    int suma=0, x=0;

    while(x!=11){ //mientras x sea distinto a 11 o menor igual a 10 es otra opci�n, dependiendo el anuncio
        suma+=x;
        ++x; //HACEMOS UN PRE INCREMENTO
    }

    printf("Valor acumulado en la variable SUMA: %d", suma);

    return 0;
} //fin de la funci�n main
