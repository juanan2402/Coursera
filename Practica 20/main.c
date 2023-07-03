#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *f;
    f=fopen("numeros.txt", "r");
    int suma=0, numero;
    while(feof(f)==0){
        fscanf(f,"%d", &numero);
        suma+=numero;

    }
    printf("Suma: %d",suma );
    return 0;
}
