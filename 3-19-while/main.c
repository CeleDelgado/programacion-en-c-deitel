/*  Figura 3-19: fig03_19.c

Una gran empresa de productos quimicos le paga a sus vendedores mediante un esquema ded comisiones.
Los vendedores reciben $200 semanales mas el 9% de sus ventas totales durante la semana.

    */
#include <stdio.h>

int main()//comienza la funcion main
{
    float venta, ingresos;
    printf("Ingrese el valor de la venta (-1 para terminar):\n");
    scanf("%f", &venta);
    //comienza el ciclo mientras que venta sea != a -1
    while(venta!= -1) {
        //calculamos los ingresos
        ingresos= 200 + (venta*9/100);
        printf("El valor de los ingresos es de: %.2f \n", ingresos);
        printf("Ingrese el valor de la venta (-1 para terminar):\n");
        scanf("%f", &venta);
        //se repite el ciclo mientras que venta sea != a -1
    }
    return 0;
}
