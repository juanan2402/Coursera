#include<stdio.h>
#include<stdlib.h>

int main(){
    
    float vector[5];
    for(int i=0;i<5;i++){
        printf("numero real: \n");
        scnaf("%f", vector[i]);
    }

    float *puntero=&vector[0];
    float media =0;

    for(int i=0; i<5;i++){
        media+=*(puntero+i);
    }
    media=media/5;
    printf("Promedio: %0.2f", media);
    
    return 0;
}