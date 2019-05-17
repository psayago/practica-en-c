#include<stdio.h>

void main(){

    float a1,a2,b1,b2,intX,intY;
    printf("***********RECTA nro 1*****************\n");
    printf("Ingrese la pendiente de la recta 1:");
    scanf("%f",&a1);
    printf("Ingrese la ordenada al origen de la recta 1:");
    scanf("%f",&b1);

    printf("***********RECTA nro 2***************** \n");
    printf("Ingrese la pendiente de la recta 2:");
    scanf("%f",&a2);
    printf("Ingrese la ordenada al origen de la recta 2:");
    scanf("%f",&b2);

    printf("\n");

    if ((a1==a2)&&(b1==b2)){
            printf("SON LA MISMA RECTA \n");
        }
    else if ((a1==a2)&&(b1!=b2)){
              printf("SON RECTAS PARALELAS NO SE INTERSECTAN \n");
         }
         else {
              intX = (b1-b2)/(a2-a1);
              intY = a1*intX+b1;
              printf("EL PUNTO DE INTERSECCION ES P=(%.2f,%.2f) \n",intX,intY);
         }

}
