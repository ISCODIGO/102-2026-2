#include <stdio.h>
#define cuadrado(x) { x*x }

int main() {
    int c = cuadrado(5);
    printf("El cuadrado de 5 es: %d", c);
    return 0;
}
