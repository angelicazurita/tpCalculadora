#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include "funciones.h"


int main()
{
    int A=0, B=0, opcion=0, resultado=0;
    /*textcolor(RED);
    textcolor(BLUE);
    textcolor(WHITE);
    textcolor(GREEN);
    */
    system ("cls");
    printf("MENU DE OPCIONES: \n\n");


    while(opcion != 7)
    {
        mostrarMenu();
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1 :
            system("cls");
            printf("Ingrese primer operando\n");
            scanf("%d",&A);
            printf("Ingrese segundo operando\n");
            scanf("%d",&B);
            resultado= calculaSUMA(A, B);
            printf("El resultado es: %d ",resultado);
            break;
        case 2 :
            system ("cls");
            printf("Ingrese primer operando\n");
            scanf("%d",&A);
            printf("Ingrese segundo operando\n");
            scanf("%d",&B);
            resultado =calculaRESTA(A, B);
            printf("resta: %d ",resultado);
            break;
        case 3 :
            system("cls");
            printf("Ingrese primer operando\n");
            scanf("%d",&A);
            printf("Ingrese segundo operando\n");
            scanf("%d",&B);
            resultado =calculaDIVISION(A,B);
            printf("division: %d ",resultado);
            break;
        case 4 :
            system("cls");
            printf("Ingrese primer operando\n");
            scanf("%d",&A);
            printf("Ingrese segundo operando\n");
            scanf("%d",&B);
            resultado=calculaMULTIPLICACION(A, B);
            printf("multiplicacion: %d ",resultado);
            break;
        case 5 :
            system ("cls");
            printf("Ingrese numero\n");
            scanf("%d",&A);
            resultado= calculaFACTORIAL(A );
            printf("factorial: %d ",resultado);
            break;
        case 6 :
            system ("cls");
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
