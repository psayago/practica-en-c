#include<stdio.h>
#include <math.h>
#include<limits.h>

void main(){

    int numero,min;
    printf("****** EJERCICIO 6 *****************\n\n");

    min=INT_MAX;
    printf("minimo = %d \n",min);
    for (int i=0;i<10;i++){
        printf("Ingrese un numero (iteracion=%d) :",i+1);
        scanf("%d",&numero);
        if(numero<min){
            min=numero;
        }
    }
    printf("El minimo de los valores ingresados es: %d",min);

}
