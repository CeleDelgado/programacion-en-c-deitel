/*  Figura 2.16: fig02_16.c
    Escriba un programa que pida al usuario escribir dos numeros, que obtenga los dos numeros por parte del usuario,
    y que imprime la suma, el producto, la diferencia, el cociente y el residuo de los dos numeros*/
#include <stdio.h>

int main()
{
    int n1,n2, suma, producto, diferencia, cociente, residuo;

    printf("\nIngrese dos numeros enteros:\n ");
    scanf("%d%d", &n1, &n2);

    //operaciones
    suma=n1+n2;
    producto=n1*n2;
    diferencia=n1-n2;
    cociente=n1/n2;
    residuo=n1%n2;

    //respuestas para el usuario
    printf("La suma entre %d y %d, es: %d\n", n1,n2,suma);
    printf("El producto entre %d y %d, es: %d\n", n1,n2,producto);
    printf("La diferencia entre %d y %d, es: %d\n", n1,n2,diferencia);
    printf("El cociente entre %d y %d, es: %d\n", n1,n2,cociente);
    printf("El residuo entre %d y %d, es: %d\n", n1,n2,residuo);

    return 0;//finaliza sin errores
}//fin de la funcion main
