/*  Figura 2.31: fig02_31.c
    Utilice sólo las técnicas que aprendió en este ccapítulo para escribir un programa que calcule los
    cuadrados y los cubos de los numeros 0 a 10, y que utilice tabuladores para desplegarse
    la siguiente tabla de valores:

    numero    cuadrado    cubo
    0           0           0
    1           1           1
    2           4           8
    3           9           27
    4           16          64
    5           25          125
    6           36          216
    7           49          343
    8           64          512
    9           81          729
    10          100         1000

    */
#include <stdio.h>

int main()
{
    int a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
    int b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10;
    //hacemos los calculos
    a0=0*0;
    a1=1*1;
    a2=2*2;
    a3=3*3;
    a4=4*4;
    a5=5*5;
    a6=6*6;
    a7=7*7;
    a8=8*8;
    a9=9*9;
    a10=10*10;
    b0=0*0*0;
    b1=1*1*1;
    b2=2*2*2;
    b3=3*3*3;
    b4=4*4*4;
    b5=5*5*5;
    b6=6*6*6;
    b7=7*7*7;
    b8=8*8*8;
    b9=9*9*9;
    b10=10*10*10;
    printf("\n\tTABLA DE VALORES\n");

    printf("0        %d      %d \n"
           "1        %d      %d \n"
           "2        %d      %d \n"
           "3        %d      %d \n"
           "4        %d      %d \n"
           "5        %d      %d \n"
           "6        %d      %d \n"
           "7        %d      %d \n"
           "8        %d      %d \n"
           "9        %d      %d \n"
           "10       %d      %d \n", a0,b0,a1,b1,a2,b2,a3,b3,a4,b4,a5,b5,a6,b6,a7,b7,a8,b8,a9,b9,a10,b10);


    return 0;
}
