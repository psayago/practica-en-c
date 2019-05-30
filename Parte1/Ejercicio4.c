#include<stdio.h>
#include <math.h>

void main(){

    float a,b,c,x1,x2;
    printf("****** CALCULO DE RAICES DE UN POLINOMIO DE GRADO 2 *****************\n\n");
    printf("Ingrese el coheficiente a:");
    scanf("%f",&a);
    printf("Ingrese el coheficiente b:");
    scanf("%f",&b);
    printf("Ingrese el coheficiente C:");
    scanf("%f",&c);

    printf("\n");
    if (a==0){
        printf("ES UN POLINOMIO DE GRADO 2");
    }else if ( (b*b-4*a*c)<0 ){
               printf("RAICES IMAGINARIAS \n");
          }else {
                x1=( (-b)+ sqrt(b*b-4*a*c) )/(2*a);
                x2=( (-b)- sqrt(b*b-4*a*c) )/(2*a);
                printf("El polinomio es %.2f (x a la n=2) %.2f (x a la n=1) %.2f (x a la n=0) y sus RAICES=(x1 = %.2f,x2 = %.2f) \n",a,b,c,x1,x2);
          }



}
