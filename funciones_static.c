#include<stdio.h>

float ResultadosTotales(float);

int main() {
    printf("%f\n", ResultadosTotales(1));  // si se inicializa: 1
    printf("%f\n", ResultadosTotales(2));  // no, acumula 1 + 2 = 3
    printf("%f\n", ResultadosTotales(3));  // no, acumula 3 + 3 = 6
    return 0;
}


float ResultadosTotales(float valor) {
    static float suma = 0; // Retiene su valor entre llamadas [10]
    suma = suma + valor;
    return suma;
}
