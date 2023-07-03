#include<stdio.h>
#include<stdlib.h>

int main(){
    float pesos[5];
    float suma=0;
    for(int i=0; i<5;i++){
        printf("insertar peso\n");
        scanf("%f", &pesos[i]);
        suma+=pesos[i];
    }

    float promedio=suma/5;
    int cont_mayor_igual=0;
    int cont_menor=0;

    for(int i=0; i<5;i++){
        if(pesos[i]>=promedio){
            cont_mayor_igual++;
        }
        else{
            cont_menor++;
        }
    }
    printf("Promedio:%.2f\n", promedio);
    printf("Pesos mayores de la media: %d\n Pesos menores de la media:%d\n", cont_mayor_igual, cont_menor);
    return 0;
}