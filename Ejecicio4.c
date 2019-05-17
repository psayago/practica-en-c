#include<stdio.h>

int busquedaDelMayorEnVector(int *x);

void main(){
    int *vec;
    int tam;
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &tam);
    vec=(int*)malloc(tam*sizeof(int));
    for (i=0;i<tam;i++){
        printf("Ingrese el valor en la posicion %d: ",i);
        scanf("%d", &vec[i]);
    }
    for (i=0;i<tam;i++){
        printf("Valor de la posicion %d del vector: %d",i,vec[i]);

    }
    free(vec);
    return 0;

}

//int busquedaDelMayorEnVector(int *x){

//}
