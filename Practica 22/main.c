#include<stdio.h>
#include<stdlib.h>

int main(){
    struct hora_entrada{
        int hora;
        int minuto;

    };
    struct entrada{
        struct hora_entrada hora1;
        int asistentes;
        float precio;
    };
    struct entrada e1;
    char continuar ='S';

    while(continuar =='S'){
        printf("Introduce la hora de entrada\n");
        scanf("%d", &e1.hora1.hora);
        printf("Introduce el minuto de entrada:\n");
        scanf("%d", &e1.hora1.minuto);
        printf("No Asistentes:\n");
        scanf("%d", &e1.asistentes);

        int total=0;

        for(int i=0;i<e1.asistentes;i++){
            int edad; 
            printf("Introduce la edad del asistente %d\n", (i+1));
            scanf("%d", &edad);
            if(edad<6){
                total+=0;
            }
            else if(edad>=6 && edad<=15){
                total+=5;
            }
            else if(edad>=16 && edad<=26){
                total+=5;
            }
            else{
                total+=10;
            }
        }
        if(e1.asistentes>=5){
            e1.precio= total-total*0.1;
        }
        else{
            e1.precio=total;
        }
        printf("Hora de entrada del grupo %d\n", e1.hora1.hora);
        printf("Minuto de entrada del grupo %d\n", e1.hora1.minuto);
        printf("Precio de las entradas %f\n", e1.precio);
        printf("Quiere continuar con otros grupos?(S/N)\n");
        scanf("%c",&continuar);
        while(continuar =='\n'){
            scanf("%c",&continuar);
        }
    }
    printf("Hasta la proxima\n");
    return 0;
}
