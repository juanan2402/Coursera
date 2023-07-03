#include<stdio.h>
#include<stdlib.h>

int main(){
    float base, altura;
    printf("Base:\n");
    scanf("%f", &base);
    printf("Altura:\n");
    scanf("%f", &altura);
    float area=base*altura;
    printf("Area del rect con base:%0.2f y altura:%0.2f =%0.2f\n",base, altura, area);
    return 0;
}