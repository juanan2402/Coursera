#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#define Pi 3.141592
int main(){
    
    struct cilindro{
        float diametro;
        float carrera;
    };
    struct motor{
        int identificador;
        struct cilindro cilindro1;
        int num_cilindros;
        float cilindrada
    };

    struct motor motor1;

    printf("identificador: \n");
    scanf("%d", &motor1.identificador);
    printf("diametro: \n");
    scanf("%d", &motor1.cilindro1.diametro);
    printf("carrera: \n");
    scanf("%d", &motor1.cilindro1.carrera);
    printf("No. cilindros: \n");
    scanf("%d", &motor1.num_cilindros);

    motor1.cilindrada = (motor1.num_cilindros*(motor1.cilindro1.carrera/10)*Pi*pow((motor1.cilindro1.diametro/10),2))/4;

    printf("Identificador:%d\n", motor1.identificador);
    printf("Diametro:%.2f\n", motor1.cilindro1.diametro);
    printf("carrera:%.2f\n", motor1.cilindro1.carrera);
    printf("Cilindros:%d\n", motor1.num_cilindros);
    printf("Cilindrada:%.2f\n", motor1.cilindrada);
    return 0;
}