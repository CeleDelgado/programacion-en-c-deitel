/* Figura 2.30: fig02_30.c
    Escriba un programa que introduzca un número de cinco dígitos, que separe el número en sus dígitos
    individuales y que despliegue los dígitos separados entre sí medianate tres espacios cada uno.*/
#include <stdio.h>

int main()
{
    int cifra;
    float u,d,c,udm,ddm;
    printf("\nIngrese un numero de cinco cifras: ");
    scanf("%d", &cifra);
    //separamos los valores
    u=cifra%10;
    d=(cifra/10)%10;
    c=((cifra/10)/10)%10;
    udm=(((cifra/10)/10)/10)%10;
    ddm=((((cifra/10)/10)/10)/10)%10;

    printf("\n");
    printf("%.f     %.f     %.f     %.f     %.f", ddm,udm,c,d,u);


    return 0;
}
