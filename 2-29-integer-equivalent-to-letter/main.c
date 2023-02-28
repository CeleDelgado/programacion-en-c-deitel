/*  Figura 2.29: fig02_27.c
    Escriba un programa en C que imprima los enteros equivalentes a algunas letras mayúsculas,
    minúsculas, dígitos y símbolos especiales. Como mínimo, determine los enteros equivalentes
    de las siguientes: A B C a b c 0 1 2 $ * + / y el carácter espacio en blanco. */
#include <stdio.h>

int main()
{
    int n1='A', n2='B', n3='C', n4='a', n5='b', n6='c', n7=0, n8=1, n9=2, n10='$', n11='*',n12='+', n13='/', n14=' ';
    printf("\n\tEnteros equivalentes a: \n  A   B   C   a   b   c   0   1   2   $   *   +   /   y el caracter espacio en blanco:\n");
    printf("    %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d", n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14);
    return 0;
}
