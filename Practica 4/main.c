#include<stdio.h>
#include<stdlib.h>

int main(){
    float euros;
    printf("Eusros que se desea convertir:\n");
    scanf("%f", &euros);
    
    printf("%0.2f euros representan %0,2f pesetas.\n",euros,euros*166.386);
    return 0;
}