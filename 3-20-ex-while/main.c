/*  Figura 3-20: fig03_20.c

El interés simple para un préstamo se calcula mediante la fórmula:

interés= préstamo*tasa*dias/365;
Desarrolle un programa que introduzca prestamo, tasa y dias para varios préstamos, y que
calcule y despliegue el interés simple para cada préstamo, utilizando la formula.

    */
#include <stdio.h>

int main() //inicio de la funcion main
{
    float interes, prestamo, tasa;
    int dias;
    printf("\n Ingrese monto del prestamo (-1 para terminar): \t");
    scanf("%f", &prestamo);
    //comienza el ciclo mientras que prestamo sea != -1
    while(prestamo!=-1){
        printf("Ingrese el valor de la tasa de interes: \t");
        scanf("%f", &tasa);
        printf("Ingrese el periodo de dias del prestamo: \t");
        scanf("%d", &dias);
        //calculamos el interes
        interes= prestamo*tasa*dias/365;
        printf("El interes del prestamos es de: $%.2f\t", interes);
        //se repite el procedimiento
         printf("\n\n Ingrese monto del prestamo (-1 para terminar): \t");
        scanf("%f", &prestamo);
        //comienza el ciclo mientras que prestamo sea != -1
    }

    return 0;
}
