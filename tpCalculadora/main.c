#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include "funciones.h"
#include <windows.h>


int main()
{
    float A=0, B=0, resultado=0;
    int opcion=0;

    system ("cls");
    printf("\033[1;33m");
    printf(" \n         CALCULADORA: \n");
    printf("\033[0m");


    while(opcion != 7)
    {
        mostrarMenu();
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1 :
            system("cls");
            printf("Ingrese primer operando\n");
            scanf("%f",&A);
            printf("Ingrese segundo operando\n");
            scanf("%f",&B);
            resultado= calculaSUMA(A, B);
            printf("%.1f + %.1f es: %.1f ",A,B, resultado);
            break;
        case 2 :
            system ("cls");
            printf("Ingrese primer operando\n");
            scanf("%f",&A);
            printf("Ingrese segundo operando\n");
            scanf("%f",&B);
            resultado =calculaRESTA(A, B);
            printf("%.1f - %.1f es: %.1f ",A,B,resultado);
            break;
        case 3 :
            system("cls");
            printf("Ingrese primer operando\n");
            scanf("%f",&A);
            printf("Ingrese segundo operando\n");
            scanf("%f",&B);
            resultado =calculaDIVISION(A,B);
            printf("%.1f / %.1f es: %.1f ",A,B,resultado);
            break;
        case 4 :
            system("cls");
            printf("Ingrese primer operando\n");
            scanf("%f",&A);
            printf("Ingrese segundo operando\n");
            scanf("%f",&B);
            resultado=calculaMULTIPLICACION(A, B);
            printf("%.1f x %.1f: %.1f ",A,B,resultado);
            break;
        case 5 :
            system ("cls");
            printf("Ingrese numero\n");
            scanf("%f",&A);
            resultado= calculaFACTORIAL(A);
            printf("El factorial de %.0f es: %.0f ",A,resultado);
            break;
        case 6 :
            system ("cls");
            printf("Ingrese primer operando\n");
            scanf("%f",&A);
            printf("Ingrese segundo operando\n");
            scanf("%f",&B);
            calculaYmuestraTODAS(A, B);

            break;
        case 7 :
            break;

        default:
            printf("Valor ingresado fuera de rango. Volver a ingresar: ");
            printf("hola");
            printf("chau");
        }
    }
    return 0;
}
