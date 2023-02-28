/* Figura 2.18: fig02_18.c
    Escriba un programa que pida al usuario que introduzca dos enteros, que obtenga los numeros por parte del
    usuario, despues que imprima las palabras "es más grande". Si los números son iguales, que imprima el mensaje
    "Estos números son iguales". Solamente utilice la forma de selección simple de la instrucción IF, que
    aprendió en este capítulo.*/
#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Introduzca dos valores enteros: \n");
    fflush(stdin);
    scanf("%d%d", &n1, &n2);
    fflush(stdin);

    if(n1>n2){
        printf("El valor: %d ES MAYOR que %d\n", n1,n2);
    }
    if(n2>n1){
        printf("El valor: %d ES MAYOR que %d\n", n2, n1);
    }
    if(n1==n2){
        printf("Los valores: %d y %d SON IGUALES\n", n1, n2);
    }


    return 0;
}
