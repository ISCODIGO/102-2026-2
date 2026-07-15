/*

Lado = 4


* * * *
*     *
*     *
* * * *

*/


#include <stdio.h>

int main() {
    int lado;
    printf("Escriba el lado: ");
    scanf("%d", &lado);

    for (int fila = 0; fila < lado; fila++) {
        if (fila == 0 || fila == lado - 1) {
            // en primera y ultima fila, imprimir todos los *
            for (int col = 0; col < lado; col++) {
                printf("* ");
            }
        } else {
            // en las restantes filas, imprimir solo la 1a col y la ultima
            for (int col = 0; col < lado; col++) {
                if (col == 0 || col == lado - 1) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
        putchar('\n');
    }
    return 0;
}
