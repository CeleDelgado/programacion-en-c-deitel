/*  Figura 3-29: fig03_29.c

    Que despliega el siguiente programa?
    */
#include <stdio.h>

int main()
{
   int contador=1;
   while(contador<=10){
    printf("%s\n", contador%2?"****":"++++++++");
    contador++;
   }
    return 0;
}
