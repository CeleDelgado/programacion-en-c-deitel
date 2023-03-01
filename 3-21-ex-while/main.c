/*  Figura 3-21: fig03_21.c
    Desarrolle un programa que determine el pago bruto de cada uno de los empleados.
    Esta empresa paga "horas completas" por las primeras 40 horas trabajadas por cada empleado y paga
    "hora y media" por todas las horas extras.Su programa debera introducir  numero de horas trabajadas
    y pago por hora de cada empleado y determinar y desplegar el pago bruto

    */
#include <stdio.h>

int main() //inicio de la funcion main
{
    int nro_hs;
    float pago_hs, extras, salario;
    printf("Ingrese numero de horas trabajadas (-1 para terminar): \t");
    scanf("%d", &nro_hs);
    //comienza el ciclo mientras que nro_hs!=-1
    while(nro_hs!=-1){
        printf("Ingrese valor de pago por hora: \t");
        scanf("%f", &pago_hs);
        //debemos evaluar si trabajo hs completa o hs extra(le sumamos $15 por hs extra
        if(nro_hs<=40){
            salario=nro_hs*pago_hs;
        }else { //cuando hago mas de 40hs hay una diferencia de $10, CORREGIR!

            extras=nro_hs%40; //hallamos el resto
            salario=(nro_hs*pago_hs)+(extras*15);
        }
        printf("El valor del salario es de \t $ %.2f", salario);
        //se repite el ciclo
        printf("\n\n Ingrese numero de horas trabajadas (-1 para terminar): \t");
        scanf("%d", &nro_hs);
        //comienza el ciclo mientras que nro_hs!=-1
    }

    return 0;
}
