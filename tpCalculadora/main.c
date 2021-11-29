#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include "funciones.h"


int main()
{
    int A=0, B=0, opcion=0, resultado=0;
    textcolor(RED);
    textcolor(BLUE);
    textcolor(WHITE);
    textcolor(GREEN);

    printf("Menu de opciones");


    while(opcion != 7)
    {
        mostrarMenu();
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 1 :
            printf("Ingrese primer operando\n");
            scanf("%d",&A);
            printf("Ingrese segundo operando\n");
            scanf("%d",&B);
            resultado= calculaSUMA(A, B);
            printf("suma: %d ",resultado);
            break;
        case 2 :
            printf("Ingrese primer operando\n");
            scanf("%d",&A);
            printf("Ingrese segundo operando\n");
            scanf("%d",&B);
            resultado =calculaRESTA(A, B);
            printf("resta: %d ",resultado);
            break;
        case 3 :
            printf("Ingrese primer operando\n");
            scanf("%d",&A);
            printf("Ingrese segundo operando\n");
            scanf("%d",&B);
            resultado =calculaDIVISION(A,B);
            printf("division: %d ",resultado);
            break;
        case 4 :
            printf("Ingrese primer operando\n");
            scanf("%d",&A);
            printf("Ingrese segundo operando\n");
            scanf("%d",&B);
            resultado=calculaMULTIPLICACION(A, B);
            printf("multiplicacion: %d ",resultado);
            break;
        case 5 :
            printf("Ingrese numero\n");
            scanf("%d",&A);
            resultado= calculaFACTORIAL(A );
            printf("factorial: %d ",resultado);
            break;
        case 6 :
            printf("Ingrese primer operando\n");
            scanf("%d",&A);
            printf("Ingrese segundo operando\n");
            scanf("%d",&B);
            calculaYmuestraTODAS(A, B);

            break;
        case 7 :
            break;

        default:
            printf("Valor ingresado fuera de rango. Volver a ingresar: ");

        }
    }
    return 0;
}
