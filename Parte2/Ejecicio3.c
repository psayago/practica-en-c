#include<stdio.h>

int factorial(int *x);

void main(){
    int num1;
    int resultado=0;
    printf("Ingrese un numero: ");
    scanf("%d", &num1);
    resultado=factorial(&num1);
    printf("El factorial de %d es: %d \n", num1, resultado);
}

int factorial(int *x){
    int res;
    if ( (*x==0) || (*x==1) ){
        return 1;
    }
    else{
        return *x  * (*x-1);
    }
}
