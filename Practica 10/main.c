#include<stdio.h>
#include<stdlib.h>

int main(){
    int suma=0, contador=0, numero=-1;
    while(numero!=0){
        printf("numero: \n");
        scanf("%d", &numero);
        contador++;
        suma+=contador;
    }
    float promedio=suma/contador;
    printf("Suma: %d\n Promedio: %d\n", suma, promedio);
    return 0;
}