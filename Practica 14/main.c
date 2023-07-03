#include<stdio.h>
#include<stdlib.h>

int main(){
    
    char cadena1[50], cadena2[50], cadena3[50], cadena4[50];
    printf("Cadena1:\n");
    scanf("%s", cadena1);
    printf("Cadena2:\n");
    scanf("%s", cadena2);
    printf("Cadena3:\n");
    scanf("%s", cadena3);
    printf("4:\n");
    scanf("%s", cadena4);

    printf("%s - %s - %s - %s" ,cadena1, cadena2, cadena3, cadena4);
    return 0;
}