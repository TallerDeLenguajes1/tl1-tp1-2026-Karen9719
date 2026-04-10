#include <stdio.h>

int main (){
    int *puntero;
    int numero= 20;

    puntero = &numero;

    printf("1-Contenido del puntero: %d\n", *puntero);
    printf("2-Direccion de memoria almacenada en el puntero: %p\n", puntero);
    printf("3-Direccion de memoria de la variable %p\n", &numero);
    printf("4-Direccion de memoria del puntero: %p\n", &puntero);
    printf("5-Tamano de memoria de la variable: %lu bytes\n");
    return 0;
}