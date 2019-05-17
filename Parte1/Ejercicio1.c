#include<stdio.h>

void main(){

    char caracter;
    printf("Ingrese un caracter:");
    scanf("%c",&caracter);
    if ((caracter=='a')||(caracter=='A')||
       (caracter=='e')||(caracter=='E')||
       (caracter=='i')||(caracter=='I')||
       (caracter=='o')||(caracter=='O')||
       (caracter=='u')||(caracter=='U')){
                 printf("Usted ingreso una vocal");
        }else printf("Usted NO ingreso una vocal");




}
