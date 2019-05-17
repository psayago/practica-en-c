#include<stdio.h>

int suma(int *x, int *y);

void main(){
    int num1,num2;
    int resultado;
    printf("Ingrese un numero: ");
    scanf("%d", &num1);
    printf("Ingrese otro numero: ");
    scanf("%d", &num2);
    resultado=suma(&num1, &num2);
    printf("La suma es: %d \n",resultado);
}

int suma(int *x, int *y){
    int resultado=0;
    resultado= *x + *y;
    return resultado;
}
