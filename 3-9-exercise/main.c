/*  Figura 3.9: fig03_09.c
    Pseudoc�digo para el problema de los resultados del examen (parte 2). An�lisis
    de los resultados de un examen*/
#include <stdio.h>
//inicio de la ejecuci�n del programa- MAIN
int main()
{
    //Inicializa las variables en las declaraciones
    int aprobados=0;  //numero de aprobados, contador
    int reprobados=0; //"     "   reprobados, " .
    int estudiante=1; // contador de estudiantes
    int resultado;    //resultado de un examen

    //procesa 10 estudiantes mediante un ciclo controlador por contador
    while(estudiante<=10) {//indica que mientras estudiantes sea menor igual a 10 ingresa al ciclo y...
        printf("Intruduzca el resultado (1=aprobado, 2=reprobado): "); //intro valor
        scanf("%d", &resultado);

        if(resultado==1){          //si se cumple que..
            aprobados=aprobados+1; //otra variante puede ser: ++ o +=
        }
        else{                      //de lo contrario..
            reprobados=reprobados+1;
        }
        estudiante++; //incrementa el contador de estudiante
    }

    //fase de terminaci�n, despliega n�mero de aprobados y de reprobados
    printf("Aprobados %d\n", aprobados);
    printf("Reprobados %d\n", reprobados);

    //si aprobaron m�s de ocho estudiantes imprime...
    if(aprobados>8){
        printf("Objetivo alcanzado\n");
    }
    return 0;
}
