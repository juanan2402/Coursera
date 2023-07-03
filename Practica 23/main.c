#include<stdio.h>
#include<stdlib.h>
struct producto{
        int codigo;
        char description[50];
        float precio;
    };

int main(){
    struct producto *prod;
    prod=malloc(sizeof(struct producto));

    printf("Introduce el codigo\n");
    scanf("%d", &prod->codigo);
    printf("Descripcion\n");
    scanf("%s", &prod->description);
    printf("Introduce el precio\n");
    scanf("%f", &prod->precio);

    printf("Codigo del articulo: %d\n", prod->codigo);
    printf("Descripcion: %d\n", prod->description);
    printf("Precio: %d\n", prod->precio);

    free(prod);
    prod=NULL;

}
