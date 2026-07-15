#include <stdio.h>

int main() {
    // 10: [==========]
    // 7:  [=======]

    int n;

    do {

        // Receta para solicitar un valor
        printf("\n\nSi desea salir escriba un numero <= 0\n");
        printf("Escriba la longitud del histograma: ");
        scanf("%d", &n);
        //

        for(int i = 1; i <= n; i++) {
            printf("+");
        }
    } while(n > 0);

    return 0;

}
