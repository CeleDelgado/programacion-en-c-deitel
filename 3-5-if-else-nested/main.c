//Instrucci�n IF-ELSE anidadas.
#include <stdio.h>

int main()
{
    int calificacion;
    printf("Ingrese calificacion: \n");
    scanf("%d", &calificacion);

    /*
   OPERADOR TERNARIO

    calificacion>=60?printf("Aprobado\n"):printf("Reprobado\n");*/

    if(calificacion>=90)
        printf("A\n");
    else if(calificacion>=80)
        printf("B\n");
    else if(calificacion>=70)
        printf("C\n");
    else if (calificacion>=60)
        printf("D\n");
    else
        printf("F\n");


    /*INSTRUCCION SIMPLE, luego de cada condici�n se da una instrucci�n
    INSTRUCCION COMPUESTA, luego de una condici�n se dan mas de una instrucciones, ejemplo: imprime mediante DOS
    printf*/


    return 0;
}
