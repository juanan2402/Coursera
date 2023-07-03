#include<stdio.h>
#include<stdlib.h>

int main(){
    char cadena[50];
    char caracter;
    printf("Introduce una cadena\n");
    scanf("%s", cadena);
    printf("Introduce un caracter\n");
    caracter=getchar();

    int i=0;
    int pos=-1;
    while(cadena[i]!='\0' && pos==-1){
        if(cadena[i]==caracter){
            pos=i;
        }
        i=i+1;

    }
    if(pos!=-1){
        printf("Hay %c en %s\n", caracter, cadena);
    }
    else{
        printf("NO hay %c en %s\n", caracter, cadena);
    }
    return 0;
}