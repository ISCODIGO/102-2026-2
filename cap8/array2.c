#include <stdio.h>
#define NUM 5

int main() {
    int numeros[NUM];

    // modificar cada elemento
    for(int i = 0; i < NUM; i++) {
        printf("Escriba un valor en la posicion %d: ", i);
        scanf("%d", &numeros[i]);
    }

    // leer cada elemento
    puts("\nLos valores son:");
    for(int i = 0; i < NUM; i++) {
        printf("\tnumeros[%d] = %d\n", i, numeros[i]);
    }

    // maximo y minimo
    int maximo = numeros[0];
    int minimo = numeros[0];

    for(int i = 0; i < NUM; i++) {
        if (maximo < numeros[i]) {
            maximo = numeros[i];
        }

        if (minimo > numeros[i]) {
            minimo = numeros[i];
        }
    }

    printf("El valor maximo es: %d\n", maximo);
    printf("El valor minimo es: %d\n", minimo);

    return 0;
}

