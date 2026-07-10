#include<stdio.h>


void intercambio(int *, int *);

int main() {
    int a = 75;
    int *p = &a;  // puntero p que se dirige a la DM de a
    printf("Direccion de memoria de a=%p\n", &a);
    printf("Valor almacenado por p=%p\n", p);

    //////////////////////////////


    printf("Valor de a (75): %d\n", *p);

    *p = 200;  // modificar a, por medio del puntero
    printf("Valor de a (200): %d\n", a);

    int x = 7;
    int y = 9;

    puts("Antes del intercambio...");
    printf("Valor de x: %d\n", x);
    printf("Valor de y: %d\n", y);

    intercambio(&x, &y);

    puts("Despues del intercambio...");
    printf("Valor de x: %d\n", x);
    printf("Valor de y: %d\n", y);

    return 0;
}

void intercambio(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
