#include <stdio.h>


// out nombre-de-funcion (in)
/*

          +----+
    IN -->|    |--->OUT
          +----+

*/

// Prototipo de la función
int sumar(int a, int b);

void funcion(void);

int main() {
    int resultado = sumar(10, 5); // Llamada a la función
    printf("El resultado es: %d", resultado);
    funcion(12);
    //funcion(12, 3);
    //funcion(12, 3, 1);
    funcion();
    return 0;
}

// Definición de la función
int sumar(int a, int b) {
    return a + b; // Retorno del valor
}

void funcion() {
    puts("\nNo hace nada");
}
