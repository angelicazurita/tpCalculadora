#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include "funciones.h"
#include <windows.h>


int main()
{
    float A=0, B=0, resultado=0;
    int opcion=0;

<<<<<<< HEAD
     system ("cls");
=======
    system ("cls");
>>>>>>> d2101d1e21155361a019056fbd376e7448f75d9a
    system("color 4E");
    printf("   ______   _____   __       ______   __  __   __       _____   _____    _____   _____    _____  \n");
    printf("  |   ___| |  _  | |  |     |   ___| | |  | | |  |     |  _  | |     |  |  _  | |  _  |  |  _  | \n");
    printf("  |  |     |  _  | |  |     |  |     | |__| | |  |     |  _  | |  ||  | | | | | |   __|  |  _  | \n");
    printf("  |  |___  | | | | |  |___  |  |___  |      | |  |___  | | | | |  ||  | | |_| | |  _ |   | | | | \n");
    printf("  |______| |_| |_| |______| |______| |______| |______| |_| |_| |_____/  |_____| |_| |_|  |_| |_| \n");


    while(opcion != 7)
    {
        mostrarMenu();
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1 :
            system("cls");
            printf("  Ingrese primer operando\n");
            scanf("   %f",&A);
            printf("  Ingrese segundo operando\n");
            scanf("   %f",&B);
            resultado= calculaSUMA(A, B);
            printf("%.0f + %.0f es: %.0f ",A,B, resultado);
            break;
        case 2 :
            system ("cls");
            printf("  Ingrese primer operando\n");
            scanf("   %f",&A);
            printf("  Ingrese segundo operando\n");
            scanf("   %f",&B);
            resultado =calculaRESTA(A, B);
            printf("   %.0f - %.0f es: %.0f ",A,B,resultado);
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
            printf("%.0f x %.0f: %.0f ",A,B,resultado);
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
<<<<<<< HEAD

=======
            
>>>>>>> d2101d1e21155361a019056fbd376e7448f75d9a
        }
    }
    return 0;
}
