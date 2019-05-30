#include<stdio.h>
#include <math.h>

void main(){

    float base,resultado;
    int exponente;
    printf("****** CALCULO DE LA POTENCIA DE UN NUMERO USANDO ESTRUCTURAS DE REPETICION *****************\n\n");
    printf("Ingrese la BASE :");
    scanf("%f",&base);
    printf("Ingrese el EXPONENTE (debe ser ENTERO):");
    scanf("%d",&exponente);
    printf("\n");

    if (exponente == 0){
        printf(" %.2f a la %d es igual a 1",base,exponente);
    }else if(exponente > 0){
        resultado=base;
        for (int i=1;i<exponente;i++){
            resultado=resultado*base;
        }
        printf(" %.2f a la %d es igual a %.2f",base,exponente,resultado);
    }else {
        resultado=base;
        exponente=(-1)*exponente;
        for (int i=1;i<exponente;i++){
            resultado=resultado*base;
        }
        resultado=1/resultado;
        printf(" %.2f a la %d es igual a %.2f",base,exponente,resultado);
    }

}
