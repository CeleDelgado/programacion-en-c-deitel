/*  Figura 3.6_ fig03_06.c
    Programa para obtener el promedio de calificaciones de un grupo mediante una
    repetición controlada por contador*/
#include <stdio.h>
//la función main inicia la ejecución del programa
int main()
{
    int cont=1, total=0, calificacion, promedio; //declaracion e inicializacion
    //procesamiento
    while(cont<=10) {//repite el ciclo 10 veces(1,2,3,4,5,6,7,8,9,10)
          printf("Introduzca la calificacion: ");//entrada
          scanf("%d", &calificacion);//lee
          total+=calificacion; //incrementa el valor de calificacion a total
          cont++;//incrementa el contador
    }//fin del while

    promedio=total/10;//hallamos el promedio
    printf("\nEl promedio del grupo es %d\n", promedio);//resultado impreso

    return 0;//programa termino con exito
}//fin de la función main
