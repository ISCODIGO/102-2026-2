/*

Programa que dado un arreglo indique el promedio de sus elementos:


promedio = sumatoria de los elementos / cantidad de elementos

*/


#include <stdio.h>
#define ELEMENTOS 5

double promedio(const int []);

int main() {
    int datos[ELEMENTOS] = {11, 20, 30, 40, 50};

    printf("El promedio es %f", promedio(datos));
    return 0;
}

double promedio(const int arreglo[]) {
    double total = 0;

    for(int i = 0; i < ELEMENTOS; i++) {
        total += arreglo[i];
    }

    return total / ELEMENTOS;
}
