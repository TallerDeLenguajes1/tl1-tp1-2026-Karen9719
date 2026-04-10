#include <stdio.h>

void inverso(int *p) {
    int aux = *p;
    int inverso = 0;
    while (aux > 0) {
        inverso = (inverso * 10) + (aux % 10);
        aux = aux / 10;
    }
    *p = inverso;
}

void mitad(int *p) {
    *p = *p / 2;
}

void suma(int *p) {
    int aux = *p;
    int suma = 0;
    while (aux > 0) {
        suma = suma + (aux % 10);
        aux = aux / 10;
    }
    *p = *p + suma;
}

void procesar_enigma(int *valor_referencia) {
    inverso(valor_referencia); //me regresa el numero invertido
    mitad(valor_referencia); // divide en dos el valor refereciando por el puntero
    suma(valor_referencia); // suma, al valor que apunta el puntero, la suma de sus digitos
}

int main() {
    int dato_secreto = 452;

    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&dato_secreto);
    
    printf("Resultado final del enigma: %d\n", dato_secreto);
    
    return 0;
}