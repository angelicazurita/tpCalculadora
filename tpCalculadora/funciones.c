void mostrarMenu(){
    printf("\n   1-SUMA \n");
    printf("   2-RESTA \n");
    printf("   3-DIVISION \n");
    printf("   4-MULTIPLICACION \n");
    printf("   5-FACTORIAL \n");
    printf("   6-TODAS LAS OPERACIONES \n");
    printf("   7-SALIR \n");
}

// calcula la suma
int calculaSUMA(int A,int  B){
    int suma = A + B;
return suma;
}

//4 Calcular la resta (A-B)\n");

int calculaRESTA(int A,int  B){
    int resta = A - B;
return resta;
}

//5 Calcular la division (A/B)\n");

int calculaDIVISION(int A,int  B){
    int division = 0;
    do
    {
        printf("No es posible la division de un numero por cero \n Vuelva a ingresar ");
        scanf("%d",&B);

    }while(B == 0);
    division = (A / B);
return division;
}

//6 Calcular la multiplicacion (A*B)\n");

int calculaMULTIPLICACION(int A,int  B){
    int multiplicacion = A * B;
return multiplicacion;
}

//7 Calcular el factorial
int calculaFACTORIAL(int A){
int factorial = 1;

for(int i = A; i > 0; i--){
    factorial = factorial * i;
}
return factorial;
}

void calculaYmuestraTODAS(int A,int B){
int resultado=0;
if(B == 0){
resultado = calculaSUMA( A, B);
printf("SUMA: %d \n", resultado);
resultado= calculaRESTA( A,  B);
printf("RESTA: %d\n", resultado);
resultado= calculaMULTIPLICACION( A, B);
printf("MULTIPLICACION: %d\n", resultado);
printf("No es posible la division por 0 \n");
}else{
    resultado = calculaSUMA( A, B);
    printf("SUMA: %d", resultado);
    resultado= calculaRESTA( A,  B);
    printf("\nRESTA: %d", resultado);
    resultado= calculaMULTIPLICACION( A, B);
    printf("\nMULTIPLICACION: %d", resultado);
    resultado= A/B;
    printf("\nDIVISION: %d", resultado);
}

return;
}
