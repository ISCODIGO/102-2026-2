/*
Base = 7 -> columnas

. . . * . . .   -> (base - 1) / 2 espacios iniciales
. . * * *       -> (base - 3) / 2
. * * * * *     -> (base - 5) / 2
* * * * * * *   -> (base - 7) / 2

*/
#include <stdio.h>
int main() {

    int base;
    int altura;
    printf("La base de cuanto debe ser (impar)... ");
    scanf("%d", &base);

    int continuar = 1;
    int figura = 1;


    while(figura <= base) {  // filas
        int espacios = (base - figura) / 2;
        for(int i = 1; i <= espacios; i++) {
            putchar(' ');
            putchar(' ');
        }
        for(int j = 1; j <= figura; j++) {  // columnas
            putchar('*');
            putchar(' ');
        }
        putchar('\n');
        figura += 2;
    }
    return 0;
}
