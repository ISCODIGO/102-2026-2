#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LARGO 10
#define randomize() srand((unsigned) time(NULL))
#define random(num) (rand() % (num))

void ordenamiento_burbuja(int []);

int main() {
    randomize();

    // crear un array aleatorio
    int datos[LARGO];

    for (int i = 0; i < LARGO; i++) {
        datos[i] = random(100);  // [0, 99]
    }

    puts("\nDatos al inicio");
    for (int i = 0; i < LARGO; i++) {
        printf("%d, ", datos[i]);
    }

    ordenamiento_burbuja(datos);

    puts("\nDatos ordenados");
    for (int i = 0; i < LARGO; i++) {
        printf("%d, ", datos[i]);
    }

    return 0;
}

void ordenamiento_burbuja(int arr[]) {
    for (int i = 0; i < LARGO - 1; i++) {  // Desde 0 al penultimo
        for(int j = i + 1; j < LARGO; j++) {  // Desde el siguiente valor hasta el ultimo
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
