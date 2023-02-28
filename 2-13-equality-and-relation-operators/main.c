/*  Figura 2.13: fig02_13.c
    Uso de instrucciones if, operadores
    de relación, y operadores de igualdad*/
#include <stdio.h>
//La funcion main inicia la ejecución del programa
int main()
{
    int num1, num2; //primer y segundo numero que lee el usuario
    printf("Introduzca dos enteros, y le dire\n" );
    printf("las relaciones que satisfacen: ");
    scanf("%d%d", &num1, &num2 ); //LECTURA DE LOS DOS NUMEROS QUE SE GUARDAN EN MEM

    if(num1==num2) {
        printf("%d es igual a %d\n", num1, num2);
    }
    if(num1!=num2) {
        printf("%d es distinto/ desigual a %d\n", num1, num2);
    }
    if(num1<num2) {
        printf("%d es menor que %d\n", num1, num2);
    }
    if(num1>num2) {
        printf("%d es mayor que %d\n", num1, num2);
    }
    if(num1<=num2) {
        printf("%d es menor o igual que %d\n", num1, num2);
    }
    if(num1>=num2) {
        printf("%d es mayor o igual que %d\n", num1, num2);
    }//luego de cada cierre de llave de cada IF, es el fin de dicho llamado

    return 0;//programa termino con exito
}//fin de función main
