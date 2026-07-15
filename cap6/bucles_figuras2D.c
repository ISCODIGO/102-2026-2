#include <stdio.h>

int main() {
    // pedir un valor al usuario
    int n;
    printf("Escriba exterior: ");
    scanf("%d", &n);

    int m;
    printf("Escriba interior: ");
    scanf("%d", &m);
    //

    // RECTANGULO
    puts("Rectangulo");
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            printf("* ");  // se ejecuta n * m veces
        }
        puts("");  // se ejecuta n veces
    }

    puts("\nTriangulo");

    // TRIANGULO
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {

                printf("* ");  // se ejecuta n * m veces

        }
        puts("");  // se ejecuta n veces
    }
    return 0;
}


