
void mostrarMenu()
{
    printf("\n                                           +---------------------------+\n");
    printf("                                           ¦      Menu de opciones     ¦\n");
    printf("                                           +---------------------------+\n");
    printf("                                           -----------------------------\n");
    printf("                                           ¦  1-SUMA                   ¦\n");
    printf("                                           ¦  2-RESTA                  ¦\n");
    printf("                                           ¦  3-DIVISION               ¦\n");
    printf("                                           ¦  4-MULTIPLICACION         ¦\n");
    printf("                                           ¦  5-FACTORIAL              ¦\n");
    printf("                                           ¦  6-TODAS LAS OPERACIONES  ¦\n");
    printf("                                           ¦  7-SALIR                  ¦\n");
    printf("                                           -----------------------------\n");
    printf("                                           ELEGIR NUMERO DE OPERACION: ");

}

// 1 calcula la suma
float calculaSUMA(float A,float  B)
{
    float suma = A + B;
    return suma;
}

// 2 Calcular la resta (A-B)\n");

float calculaRESTA(float A,float  B)
{
    float resta = A - B;
    return resta;
}

// 3 Calcular la division (A/B)\n");

float calculaDIVISION(float A,float  B)
{
    float division = 0;

    if(B == 0)
    {
        printf("\n                                           No es posible la division de\n");
        printf("                                                un numero por cero \n");
    }
    else
    {
        float division = (A / B);
        return division;
    }
}


//4 Calcular la multiplicacion (A*B)\n");

float calculaMULTIPLICACION(float A,float  B)
{
    float multiplicacion = A * B;
    return multiplicacion;
}

//5 Calcular el factorial
int calculaFACTORIAL(int A)
{
    int factorial;

    if(A <1 ){
        return 0;
    }else if(A == 1){
    return 1;
    }else{
    return A*calculaFACTORIAL(A-1);
    }
    return factorial;
}
//6 calcula todas las funciones
void calculaYmuestraTODAS(float A,float B)
{
    float resultado=0;
    if(B == 0)
    {
        resultado = calculaSUMA( A, B);
        printf(" SUMA: %f \n", resultado);
        resultado= calculaRESTA( A,  B);
        printf(" RESTA: %f\n", resultado);
        resultado= calculaMULTIPLICACION( A, B);
        printf(" MULTIPLICACION: %f\n", resultado);
        printf(" No es posible la division por 0. \n");
    }
    else
    {
        resultado = calculaSUMA( A, B);
        printf("\n                                           SUMA: %.1f + %.1f = %.1f",A,B, resultado);

        resultado= calculaRESTA( A,  B);
        printf("\n                                           RESTA: %.1f - %.1f = %.1f",A,B, resultado);

        resultado= calculaMULTIPLICACION( A, B);
        printf("\n                                           MULTIPLICACION: %.1f x %.1f = %.1f",A,B, resultado);

        resultado= A/B;
        printf("\n                                           DIVISION: %.1f / %.1f = %.1f",A, B, resultado);

        resultado= calculaFACTORIAL (A);
        // printf("\n FACTORIAL %d= %d", A, resultado);
        printf("\n                                           FACTORIAL de %.0f es: %.0f ",A,resultado);
        printf("\n\n");
        return;
    }
}


int validaRango(int A ){
  if ( A >=0 && A <= 31){
    return 1;
  }else{
 return 0;
  }

}
