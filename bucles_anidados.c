#include <stdio.h>
int main() {
    int c;
    printf("El lado de cuanto debe ser... ");
    scanf("%d", &c);

    for (int i = 1; i <= c; i++) {  // filas
        for(int j = 1; j <= c; j++) {  // columnas
            putchar('*');
            putchar(' ');
        }
        putchar('\n');
    }

    printf("Fueron %d iteraciones.", c);

    return 0;
}
