#include <stdio.h>

int cuadrado(int num);
void cuadrado_void(int *num);
void mostrar(int *num);
void invertir(int *a, int *b);
void orden(a,b);

int main(){
    int numero = 10;
    int resultado;
    int *p=&numero;

    printf("Valor del numero: %d\n", numero);
    resultado=cuadrado(numero);
    printf("Cuadrado del numero: %d\n", resultado);

    cuadrado_void(p);
    printf("Cuadrado con void: %d\n", numero);

    mostrar(p);

    int x=5, y=8;
    int *px=&x, *py=&y;
    printf("Antes de invertir: x = %d, y = %d\n", x, y);
    invertir(px,py);
    printf("Despues de invertir: x = %d, y = %d\n", x, y);

    printf("Antes de ordenar: x = %d, y = %d\n", x, y);
    orden(px,py);
    printf("Despues de ordenar: x = %d, y = %d\n", x, y);


    return 0;
}

int cuadrado(int num){
    num=num*num;
    return (num);
}

void cuadrado_void(int *num){
    *num = (*num)*(*num);
}

void mostrar(int *num){
    printf("Direccion de la variable: %p\n", &(*num));
    printf("Contenido de la variable: %d\n", *num);
}

void invertir(int *a, int *b){
    int aux=*a;
    *a=*b;
    *b=aux;
}

void orden(int *a, int *b){
    int aux=*a;
    if(*a>*b){
        *a=*b;
        *b=aux;
    }
}