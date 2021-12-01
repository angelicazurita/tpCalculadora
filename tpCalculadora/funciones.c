
void mostrarMenu()
{
    printf("\n \n   MENU DE OPCIONES: \n");
    printf("\n   1-SUMA \n");
    printf("   2-RESTA \n");
    printf("   3-DIVISION \n");
    printf("   4-MULTIPLICACION \n");
    printf("   5-FACTORIAL \n");
    printf("   6-TODAS LAS OPERACIONES \n");
    printf("   7-SALIR \n");
    printf("\n ELEGIR NUMERO DE OPERACION:");

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
        printf("No es posible la division de un numero por cero \n ");
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
    int factorial = 1;

    for(int i = A; i > 0; i--)
    {
        factorial = factorial * i;
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
        printf("\n SUMA: %.1f + %.1f = %.1f",A,B, resultado);

        resultado= calculaRESTA( A,  B);
        printf("\n RESTA: %.1f - %.1f = %.1f",A,B, resultado);

        resultado= calculaMULTIPLICACION( A, B);
        printf("\n MULTIPLICACION: %.1f x %.1f = %.1f",A,B, resultado);

        resultado= A/B;
        printf("\n DIVISION: %.1f / %.1f = %.1f",A, B, resultado);

        //printf("\n Ingrese un numero para factorial: \n");
        //scanf("%d", &A);

        resultado= calculaFACTORIAL (A);
        // printf("\n FACTORIAL %d= %d", A, resultado);
        printf("\n El factorial de %.0f es: %.0f ",A,resultado);

        return;
    }
}
