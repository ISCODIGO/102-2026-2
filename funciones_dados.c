#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int azar(int minimo, int maximo) {
    // Generar numeros aleatorios en el rango [minimo, maximo]

    int r;

    do {
        //srand(time(NULL));
        r = 1 + rand() % maximo;  // [1, maximo]
        //printf("\tr=%d\n", r);
    } while(r < minimo);

    return r;  // [minimo, maximo]
}

int dado() {

    //srand(time(NULL));
    return azar(1, 6);
}

int main() {
    srand(time(NULL));
    for(int i = 0; i < 10; i++) {
        printf("Lanzamiento #%d = %d\n", i + 1, dado());
    }
    return 0;
}
