/*

Base = 4

                fila    col
* . . .         0        1
* * . .         1        2
* . * .         2        3
* * * *         3        4

----
. . . *    n = 4  escribir * segun el valor de la fila
. . * *
. * . *
* * * *

*/


#include<stdio.h>

int main() {
    // Solicitar la base
    int base;
    printf("Escriba la base del triangulo: ");
    scanf("%d", &base);

    for (int fila = 0; fila < base; fila++) {
        for (int col = 0; col < base; col++) {
            if (col <= fila) {
                printf("* ");
            }
        }
        putchar('\n');
    }

    putchar('\n');

    for (int fila = 0; fila < base; fila++) {
        int asteriscos = fila + 1;
        int espacios = base - asteriscos;

        // imprime espacios
        for(int i = 0; i < espacios; i++) {
            printf("  ");  // 2 espacios
        }

        // imprime asteriscos
        for(int j = 0; j < asteriscos; j++) {
            printf("* ");
        }
        putchar('\n');
    }
}
