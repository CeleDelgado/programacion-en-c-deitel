/*  Figura 3-17: fig03_17.c
    Los conductores están preocupados por el kilometraje obtendo en sus automóviles. Un conductor mantiene
    el registro de muchos llenados de tanques de gasolina mediante el registro de miles de kilometrros
    conducidos y los litros empleados drante cada llenado del tanque. El programa debe calcular y desplegar los kilometros
    por litro obtenidos durante cada llenado de tanque despues de procesar toda la informacion el programa
    debe calcular y desplegar los kilometrros por litro combinados de todos los llenados de tanque.
    */
#include <stdio.h>

int main()
{//comienza el programa main

    float km_conducidos, lts_empleados, kmXlts, prom, suma_kmXlts=0, cont=0;
    printf("Ingrese litros empleados, (-1) para terminar:\n");
    scanf("%f", &lts_empleados);
    //comienza el ciclo
    while(lts_empleados!=-1){
        printf("Ingrese kilometros conducidos:\n");
        scanf("%f", &km_conducidos);
        //realizamos el calculo
        kmXlts=km_conducidos/lts_empleados;
        printf("La cantidad de kilometros por litro es de: %f \n\n", kmXlts);
        //acumulamos los km por litro obtenidos
        suma_kmXlts+=kmXlts;
        //contamos los ingresos para poder calcular el promedio
        cont++;
        //ingresamos otros valores para calcular
        printf("Ingrese litros empleados, (-1) para terminar:\n");
        scanf("%f", &lts_empleados);
        //sale del ciclo cuando deja de cumplir la condición
    }
    prom= suma_kmXlts/cont;
    printf("Los km por litro combinados dieron un promedio total de: %f", prom);

    return 0;
}
