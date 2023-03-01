/*  Figura 3-24: fig03_24.c
    El proceso para encontrar el numero mas grande (es decir, el máximo de un grupo de numeros) se
    utiliza con frecuencia en aplicaciones para computadora. Por ejemplo, un programa que determina
    el ganador de un concurso de unidades vendidas por cada vendedor. El vendedor que vende el mayor número
    de unidades gana. Escriba un programa que introduzca una serie ded 10 números y determine e imprima el
    mayor de éstos.
*/
#include <stdio.h>

int main() //comienza la función main
{
    int contador=0, mayor=0, nro; //declaramos las variables
    //comienza el ciclo
    while(contador<=10){
        printf("Ingrese un numero: \n"); //solicitamos el ingreso
        scanf("%d", &nro);
        //mientras el contador sea menor o igual a 10...
        if(nro> mayor){ //analizamos los valores de nro y mayor
            mayor=nro;
        }else{//sino que no haga niguna accion
        }
        ++contador;//incrementamos el contador y solicito un nuevo ingreso..
        //si se cumple que el contador es menor o igual a 10, vuelve a ingresar al ciclo
    }
    printf("\nEl mayor valor ingresado es: %d", mayor);
    return 0;
}
