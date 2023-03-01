/*  Figura 3.8: fig03_08.c
    Programa para obtener el promedio de calificaciones de un grupo mediante
    una repetici�n controlada por CENTINELA*/
#include <stdio.h>
//La funci�n main inicia la ejecuci�n del programa
int main()
{
    int contador; //n�mero de calificaciones introducidas
    int calificacion; //valor de la calificaci�n
    int total; //suma de las calificaciones
    float promedio; // n�mero con punto decimal para el promedio

    //FASE DE INICIALIZACION
    total=0; //inicializa el total
    contador=0; //inicializa el contador del ciclo

    /*FASE DE PROCESAMIENTO
    Obtiene la primera calificaci�n del usuario*/
    printf("Introduzca la calificacion, -1 para terminar: ");
    //indicador para la entrada
    scanf("%d", &calificacion);//lee la calificacion del usuario
    //repite el ciclo mientras no se introduzca el valor CENTINELA(-1)
    while(calificacion!=-1){
        total+=calificacion; //suma calificaci�n a total
        contador++; //incrementa en 1 a contador
        //obtiene siguiente calificaci�n del usuario
        printf("Introduzca la calificacion, -1 para terminar: ");
        //indicador para la entrada
        scanf("%d", &calificacion);//lee la siguiente calificaci�n del usuario
    } //fin del while

    /*FASE DE TERMINACI�N
      si el usuario introdujo al menos una calificaci�n*/
    if(contador!=0){
        //calcula el promedio de todas las calificaciones introducidas
        promedio=(float)total/contador; //evita que se trunque colocando float delante del valor entero
        //despliega el promedio con dos d�gitos de precisi�n= %.2f
        printf("El promedio del grupo es: %.2f\n", promedio);
    }//fin del if
    else { //sino se introdujo calificaci�n alguna, despliega el mensaje
        printf("No se introdujeron calificaciones\n");
    }//fin del else
    return 0; //indica que el programa termin� con �xito
}//fin de la funci�n main
