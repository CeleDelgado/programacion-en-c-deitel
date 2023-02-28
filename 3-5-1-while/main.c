//WHILE(mientras)
/*En este programa vamos a encontrar la primera potencia de 2 que sea mayor que 1000
si PRODUCTO se inicializa en 2, cuando finaliza (cuando potencia<=1000 sea FALSO)
producto contendra la  respuesa deseada*/

#include <stdio.h>

int main()
{
    int producto=2;
    while(producto<=1000){
        producto=2*producto;
    }
    printf("La primera potencia de 2 mayor a 1000 es: %d\n", producto);
    return 0;
}
