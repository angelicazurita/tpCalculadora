#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include "funciones.h"
#include <windows.h>


int main()
{
    float A=0, B=0, resultado=0, num=0;
    int opcion=0;

    system ("cls");
    system("color 0B");
    printf("\n");
    printf("         ______   _____   __       ______   __  __   __       _____   _____    _____   _____    _____  \n");
    printf("        |   ___| |  _  | |  |     |   ___| | |  | | |  |     |  _  | |     |  |  _  | |  _  |  |  _  | \n");
    printf("        |  |     |  _  | |  |     |  |     | |__| | |  |     |  _  | |  ||  | | | | | |   __|  |  _  | \n");
    printf("        |  |___  | | | | |  |___  |  |___  |      | |  |___  | | | | |  ||  | | |_| | |  _ |   | | | | \n");
    printf("        |______| |_| |_| |______| |______| |______| |______| |_| |_| |_____/  |_____| |_| |_|  |_| |_| \n\n\n\n");



    while(opcion != 7)
    {
        mostrarMenu();
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1 :
            system("cls");
            system("color 5F");
            printf("                                           +---------------------------+\n");
            printf("                                           ¦            Suma           ¦\n");
            printf("                                           +---------------------------+\n");
            printf("\n                                           Ingrese primer operando= ");
            scanf("%f",&A);
            printf("\n                                           Ingrese segundo operando= ");
            scanf("%f",&B);
            resultado= calculaSUMA(A, B);
            printf("\n\n\n                                           +---------------------------+\n");
            printf("                                               %.1f + %.1f = %.1f     \n",A,B, resultado);
            printf("                                           +---------------------------+\n");
            system("color 5F");
            printf("\n");
            printf("\n");
            printf("\n");
            break;
        case 2 :
            system ("cls");
            system("color 9F");
            printf("                                           +---------------------------+\n");
            printf("                                           ¦            Resta          ¦\n");
            printf("                                           +---------------------------+\n");
            printf("\n                                           Ingrese primer operando= ");
            scanf("%f",&A);
            printf("\n                                           Ingrese segundo operando= ");
            scanf("%f",&B);
            resultado= calculaRESTA(A, B);
            printf("\n\n\n                                           +---------------------------+\n");
            printf("                                               %.1f - %.1f = %.1f     \n",A,B, resultado);
            printf("                                           +---------------------------+\n");
            system("color 9F");
            printf("\n");
            printf("\n");
            printf("\n");
            break;
        case 3 :
            system("cls");
            system("color 0A");
            printf("                                           +---------------------------+\n");
            printf("                                           ¦         Division          ¦\n");
            printf("                                           +---------------------------+\n");
            printf("\n                                           Ingrese primer operando= ");
            scanf("%f",&A);
            printf("\n                                           Ingrese segundo operando= ");
            scanf("%f",&B);
            resultado= calculaDIVISION(A, B);
            printf("\n\n\n                                           +---------------------------+\n");
            printf("                                               %.1f / %.1f = %.1f     \n",A,B, resultado);
            printf("                                           +---------------------------+\n");
            system("color 0A");
            printf("\n");
            printf("\n");
            printf("\n");
            break;
        case 4 :
            system("cls");
            system("color 7C");
            printf("                                           +---------------------------+\n");
            printf("                                           ¦       Multiplicacion      ¦\n");
            printf("                                           +---------------------------+\n");
            printf("\n                                           Ingrese primer operando= ");
            scanf("%f",&A);
            printf("\n                                           Ingrese segundo operando= ");
            scanf("%f",&B);
            resultado= calculaMULTIPLICACION(A, B);
            printf("\n\n\n                                           +---------------------------+\n");
            printf("                                               %.1f X %.1f = %.1f     \n",A,B, resultado);
            printf("                                           +---------------------------+\n");
            system("color 7C");
            printf("\n");
            printf("\n");
            printf("\n");
            break;
        case 5 :
            system ("cls");
            system("color 3D");
            printf("                                           +---------------------------+\n");
            printf("                                           ¦          Factorial        ¦\n");
            printf("                                           +---------------------------+\n");
            printf("\n                                           Ingrese numero ( del 0 al 31) = ");
            scanf("%f",&A);
            if( validaRango(A) == 1)
            {
                resultado= calculaFACTORIAL(A);
                printf("\n\n\n                                           +---------------------------+\n");
                printf("                                              El factorial de %.0f es: %.0f\n",A, resultado);
                printf("                                           +---------------------------+\n");
                system("color 3D");
                printf("\n");
            }
            else
            {
                printf("\n\n                                           Valor fuera de rango");
            }
            printf("\n");

            break;
        case 6 :
            system ("cls");
            system("color 4E");
            printf("                                           +---------------------------+\n");
            printf("                                           ¦   Todas las operaciones   ¦\n");
            printf("                                           +---------------------------+\n");
            printf("\n                                           Ingrese primer operando= ");
            scanf("%f",&A);
            printf("\n                                           Ingrese segundo operando= ");
            scanf("%f",&B);
            calculaYmuestraTODAS(A, B);

            break;
        case 7 :

            break;

        default:
            printf("Valor ingresado fuera de rango. Volver a ingresar: ");

        }
    }
    system("cls");
    system("color 0E");
    printf("                                            ____________    _____    _______    _____ \n");;
    printf("                                           |            |  |     |  |       |  |     |\n");
    printf("                                           |     _______|  |     |  |        | |     |\n");
    printf("                                           |    |_____     |     |  |         ||     |\n");
    printf("                                           |     _____|    |     |  |          |     |\n");
    printf("                                           |    |          |     |  |     | |        |\n");
    printf("                                           |    |          |     |  |     |  |       |\n");
    printf("                                           |    |          |     |  |     |   |      |\n");
    printf("                                           |____|          |_____|  |_____|    |_____|\n");
    printf("\n\n\n\n");
    printf("                                              +---------------------------+\n");
    printf("                                              ¦          ALUMNAS          ¦\n");
    printf("                                              +---------------------------+\n");
    printf("\n\n\n");
    printf("                *GOMEZ MICAELA*                       *AVARI ROMINA*              *ZURITA ANGELICA*");
    printf("\n\n\n");
    return 0;
}
