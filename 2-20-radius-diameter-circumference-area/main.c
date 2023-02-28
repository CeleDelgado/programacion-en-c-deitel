/*  Figura 2.20: fig02_20.c
    Escriba un programa que lea el radio de un círculo y que imprima el diámetro, la circunferencia y el área
    de ese círculo. utilice el valor constante de 3.14159 para pi. Realice cada uno de estos cálculos dentro de instrucción(es)
    PRINTF, y utiilice el especificador de conversión %f.
    */
#include <stdio.h>

int main()
{
    float pi=3.14159, r, diametro, circunferencia, area;
    printf("Ingrese el radio de un circulo: \n");
    scanf("%f", &r);
    //calculamos los datos del círculo daado
    diametro= 2*r;
    circunferencia= diametro*pi; //es el perimetro del circulo
    area= pi* r* r;
    //respuestas para el usuario
    printf("\nEl DIAMETRO del circulo informado es: %.5f", diametro);
    printf("\nLa CIRCUNFERENCIA del circulo es: %.5f", circunferencia);
    printf("\nEl AREA del circulo es: %.5f", area);

    return 0;
}
