#include<stdio.h>

void main(){

    char caracter;
    printf("Ingrese un caracter:");
    scanf("%c",&caracter);
    if ((48<=(int)caracter)&&(57>=(int)caracter)){
                 printf("Usted ingreso un digito");
        }else printf("Usted NO ingreso una digito");

}
