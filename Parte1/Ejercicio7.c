#include<stdio.h>
#include <math.h>
#include<float.h>

void main(){

    float numero,max,promedio;
    float sumaMax=0;
    printf("****** EJERCICIO 7 *****************\n\n");
    max=FLT_MIN;


    for (int i=0;i<5;i++){
        printf("Ingrese un numero mayor a CERO: ");
        scanf("%f",&numero);
        while(numero != -1.00){
            if(numero>0){
                if(numero>=max){
                    max=numero;
                }
            }else printf("EL NUMERO DEBE SER MAYOR A CERO \n");
            printf("Ingrese un numero mayor a CERO: ");
            scanf("%f",&numero);
        }
        printf("EL MAXIMO DE JUEGO %d ES %.2f \n",i+1,max);
        sumaMax=sumaMax+max;
        max=FLT_MIN;
    }
    promedio=sumaMax/5;
    printf("EL PROMEDIO DE LOS MAXIMOS VALORES INGRESADOS ES: %.2f",promedio);

}
