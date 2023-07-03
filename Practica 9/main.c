#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, contador_aprobados=0, contador_suspensos=0;
    float nota;
    printf("No. alumnos: \n");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("Nota del alumno %d:\n", i);
        scanf("%f", &nota);

        if(nota>=5){
            contador_aprobados++;
        }
        else{
            contador_suspensos++;
        }
    }
    printf("Aprobados: %d\n Suspensos: %d\n", contador_aprobados, contador_suspensos);
    return 0;
}