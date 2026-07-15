#include <stdio.h>

int main() {
    const int LIM = 2;
    int edad[LIM];  // Se puede almacenar dos numeros enteros
    int posicion;

    edad[0] = 10;
    edad[1] = 20;

    //  0   1   2X
    // [4B][4B][4B]

    printf("Escriba la posicion: ");
    scanf("%d", &posicion);

    if (posicion < LIM) {
        printf("Posicion: %d es valor es: %d", posicion, edad[posicion]);
    } else {
        printf("Posicion invalida debe ser entre [0 y %d]", LIM-1);
    }
    return 0;
}
