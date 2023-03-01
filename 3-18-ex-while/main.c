/*  Figura 3-18: fig03_18.c
    Desarrolle un programa en C que determine si un cliente de una tienda departamental excede
    el limite de crédito de su cuenta. Para cada cliente, se dispone de los siguientes datos:
    1. numero de cuenta
    2. saldo inicial
    3. total de elementos cargados al cliente en este mes
    4. el total de creditos aplicados a la cuenta del cliente durante el mes
    5. el limite de credito autorizado
    El programa debe determinar si excede el limite de credito del cliente

    */
#include <stdio.h>

int main()
{//comienza la funcion main
    int nro_cuenta, saldo_i, total_elem, total_cred, limite, saldo_n=0;
    printf("Ingrese NUMERO DE CUENTA del cliente (-1 para terminar): \n");
    scanf("%d", &nro_cuenta);
    while(nro_cuenta!=-1){ //mientras nro de cuenta sea distinto a -1, ingresamos el resto de los datos
        printf("Ingrese SALDO INICIAL:\n");
        scanf("%d", &saldo_i);
        printf("Ingrese TOTAL DE ELEMENTOS:\n");
        scanf("%d", &total_elem);
        printf("Ingrese TOTAL DE CREDITOS:\n");
        scanf("%d", &total_cred);
        printf("Ingrese LIMITE:\n");
        scanf("%d", &limite);
        //hallamos el nuevo saldo
        saldo_n=saldo_i+total_elem-total_cred;
        //analizamos si el nuevo saldo se excede los limites
        if(saldo_n>limite){
            printf("NUMERO DE CUENTA: %d\n", nro_cuenta);
            printf("LIMITE: %d\n", limite);
            printf("SALDO NUEVO: %d\n", saldo_n);
            printf("Limite de credito: EXCEDIDO!\n");
        }
        else
            printf("Su cuenta se encuentra dentro de los limites establecidos, FELICIDADES\n");
        //solicitamos otro numero de cuenta a verificar
        printf("Ingrese NUMERO DE CUENTA del cliente (-1 para terminar): \n");
        scanf("%d", &nro_cuenta);

    }

    return 0;
}//fin de la función main

///PARA ESTE TIPO DE EJERCICIOS UTILIZAR VALORES FLOTANTES, YA QUE ES DINERO Y PUEDE VARIAR- OBSERVACION
//(EL PROGRAMA FUNCIONA CON EXITO)
