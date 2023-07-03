#include<stdio.h>
#include<stdlib.h>

int main(){
    int informacion[3][4]={{1, 120,150,220}, {2, 130,160,230}, {3,100,120,200}};
    int suma_temp_baja=0, suma_temp_media=0, suma_temp_alta=0;
    for(int i=0;i<3;i++){
        for(int j=1;j<4;j++){
            if(j==1){
                suma_temp_baja+=informacion[i][j];
            }
            if(j==2){
                suma_temp_media+=informacion[i][j];
            }
            if(j==3){
                suma_temp_alta+=informacion[i][j];
            }
        }
    }
    float promedio_temp_baja=suma_temp_baja/3;
    float promedio_temp_alta=suma_temp_alta/3;
    float promedio_temp_media=suma_temp_media/3;
    
    printf("temp baja: %0.2f\n, temp alta: %0.2f\n, temp media: %0.2f\n", promedio_temp_baja, promedio_temp_alta, promedio_temp_media);
    return 0;
}