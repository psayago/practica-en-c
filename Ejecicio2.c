#include<stdio.h>

void sumaProc(float *x, float *y, float *resultado);

void main(){
    float num1,num2;
    float resultado=0;
    printf("Ingrese un numero: ");
    scanf("%f", &num1);
    printf("Ingrese otro numero: ");
    scanf("%f", &num2);
    sumaProc(&num1, &num2, &resultado);
    printf("La suma es: %.2f \n",resultado);
}

void sumaProc(float *x, float *y, float *resultado ){
    *resultado = (*x) + (*y);
    return ;
}
