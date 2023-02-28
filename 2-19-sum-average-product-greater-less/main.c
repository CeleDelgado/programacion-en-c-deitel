/*   Figura 2.19: fig02_19.c
    Escriba un programa que introduzca tres diferentes enteros desde el teclado, después que imprima la suma,
    el promedio, el producto, el número mas pequeño y el más grande de éstos. Solamente utilice la forma de selección
    simple de la instrucción IF, que aprendió en este capítulo. El diálogo en la pantalla debe aparece de la siguiente
    forma:

    Escriba tres enteros diferentes: *  *  *
    La suma es **
    El promedio es **
    El producto es **
    El número más pequeño es *
    El número más grande es *                                                                                       */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, suma, promedio, producto;
    printf("Escriba tres enteros diferentes: \n");
    scanf("%d%d%d", &n1, &n2, &n3);
//en este programa guarda los tres valores correctamente: NO COLOCAR \n LUEGO DE UN CONVERSOR, EJ %d\n, SINO PIDE UNO MAS
    suma=n1+n2+n3;
    promedio=(n1+n2+n3)/3;
    producto=n1*n2*n3;

    printf("\nLa suma es: %d\n", suma);
    printf("El promedio es: %d\n", promedio);
    printf("El producto es: %d\n", producto);
    //ANALIZAMOS EL MENOR Y EL MAYOR
    if(n1<n2){
        if(n1<n3){
            printf("El numero mas pequenio es: %d", n1);
            if(n2>n3){
                printf("\nEl numero mas grande es: %d", n2);
                if(n3>n2){
                    printf("\nEl numero mas grande es: %d", n3);//aqui falla el lote de prueba, si tengo 1-2-3, solo me informa el numero mas pequeño, no el mas grande
                }
            }
        }
    }
    if(n2<n1){
        if(n2<n3){
            printf("El numero mas pequenio es: %d", n2);
            if(n1>n3){
                printf("\nEl numero mas grande es: %d", n1);
                if(n3>n1){
                    printf("\nEl numero mas grande es: %d", n3);
                }
            }
        }
    }
    if(n3<n1){
        if(n3<n2){
            printf("El numero mas pequenio es: %d", n3);
            if(n1>n2){
                printf("\nEl numero mas grande es: %d", n1);
                if(n2>n1){
                    printf("\nEl numero mas grande es: %d", n2);
                }
            }
        }
    }


    return 0;
}
