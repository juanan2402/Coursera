#include<stdio.h>
#include<stdlib.h>
int main(){
    int precio_base, kilometros;
    float consumo, precio_final;

    printf("Precio base del carro\n");
    scanf("%d", &precio_base);
    printf("kilometros\n");
    scanf("%d", &kilometros);
    printf("consumo\n");
    scanf("%f", &consumo);

    if(kilometros<20000 && consumo<=5){
        precio_final=precio_base*1.2;
    }
    else if(kilometros>20000 && consumo<=5){
        precio_final=precio_base*1.1;
    }
    else if(consumo>5){
        precio_final=precio_base*1.05;
    }
    printf("Precio final: %,2f \n", precio_final);
    return 0;
}
