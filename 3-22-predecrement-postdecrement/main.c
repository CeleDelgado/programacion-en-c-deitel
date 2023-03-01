/*  Figura 3-22: fig03_22.c
    Desarrolle un programa que demuestre la diferencia entre el predecremento y el
    postdecremento mediante el uso del operador --/ ++

    ejemplo:
    --b     decrementa b en 1 y despues utiliza el nuevo valaor de b
    b--     utiliza el valor actual de b en la expresion en la cual reside b y DESPUES
*/
#include <stdio.h>

int main()
{
   int c;
   //demostracion del posdecremento
   c=5;
   printf("%d\n", c); //imprime 5
   printf("%d\n", c--); //imprime 5 y hace el pos-decremento
   printf("%d\n", c); //imprime 4

   //demostracion del predecremento
   c=5;
   printf("%d\n", c); //imprime 5
   printf("%d\n", --c); //pos-decrementa y DESPUES imprime 4
   printf("%d\n", c); //imprime 4

    return 0;
}
