#include <stdio.h>
#define FILA_MAX 7
int main() {
    int tabla[FILA_MAX];

    for (int fila = 0; fila < FILA_MAX; fila++) {
        int espacios = FILA_MAX - 1 - fila;

        // rellenando todas las celdas de 1s
        tabla[fila] = 1;


        // relleno
        for(int sub = fila - 1; sub >= 1; sub--) {
            tabla[sub] = tabla[sub] + tabla[sub-1];
        }

        // imprimir tabla
        for (int e = 1; e <= espacios; e++) {
            printf(" ");
        }

        for (int i = 0; i <= fila; i++) {
            printf("%d ", tabla[i]);
        }
        puts("");
    }

    return 0;
}
