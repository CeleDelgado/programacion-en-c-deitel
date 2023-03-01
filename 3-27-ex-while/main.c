/*  Figura 3-27: fig03_27.c
    Mediante un método similar al del ejercicio 3.24, encuentre los dos valores más grandes de los 10 números
*/
#include <stdio.h>

int main()
{
   int cont=0, nro, pri_mayor=0, seg_mayor=0;
   printf("\nIngrese un valor: \n");
   scanf("%d", &nro);
   //comienza el ciclo
   while(cont<=10){
        if(nro>pri_mayor){
            pri_mayor=nro;
        }
        else{
            if (nro>seg_mayor){
            seg_mayor=nro;
            }
        }

    ++cont;
    printf("\nIngrese un valor: \n");
    scanf("%d", &nro);
   }
    printf("\nEl primer valor mayor es: %d y el segundo es: %d\n", pri_mayor, seg_mayor);
    return 0;
}
