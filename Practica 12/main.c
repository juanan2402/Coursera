#include<stdio.h>
#include<stdlib.h>

int main(){
    int num[10]={2, 3, 4, -5, 4, -2, 10, 8, 9, 120};
    int max=num[0];
    int min=num[0];

    for(int i=0;i<10;i++){
        if(num[i]>max){
            max=num[i];
        }
        if(num[i]<min){
            min=num[i];
        }
    }
    printf("max: %d\n min:%d\n", max, min);
    return 0;
}