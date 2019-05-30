#include<stdio.h>

int busquedaDelMayorEnVector(int *x);
void cargarVector(int *vec, int tam);

void main(){
    int *vec;
    int tam;
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &tam);
    vec=(int*)malloc(tam*sizeof(int));
    cargarVector(&vec,tam);
    //system("cls");
    for (int i=0;i<tam;i++){
        printf("Valor de la posicion %d del vector:%d \n",i,vec[i]);

    }
    free(vec);
    return 0;

}

void cargarVector(int *vec,int tam){
    for (int i=0;i<tam;i++){
        printf("Ingrese el valor en la posicion %d: ",i);
        scanf("%d", &vec[i]);
        printf("posicion:%d //valor :%d \n",i,&vec[i]);

    }

}


//int busquedaDelMayorEnVector(int *x){

//}
