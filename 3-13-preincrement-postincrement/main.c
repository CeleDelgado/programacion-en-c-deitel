/*  Figura 3.13: fig03_13.c
    Preincremento en comparación con Posincremento*/
#include <stdio.h>
//Inicia la ejecución la función main
int main()
{
    int c; //define variable
    //demostramos POSINCREMENTO
    c=5;            //asignamos valor a c
    printf("%d\n", c); //imprime 5
    printf("%d\n", c++); //imprime 5 y hace el posincremento
    printf("%d\n\n", c);   //imprime 6

    //demostramos el PREINCREMENTO
    c=5;                 //le asignamos valor a c
    printf("%d\n", c);   //imprime 5
    printf("%d\n", ++c); //preincrementa y después imprime 6
    printf("%d\n", c);   //imprime 6

    return 0;
}//fin de la función
