#include <stdio.h>

int main() {
    /*
    Programa que escriba del 1 al 99, impares.
    Si el numero es divisible por 11 no lo escribo.
    */

    int i = -1;

    while(1) {
        i += 2;

        if (i % 11 == 0) {
            continue;
        }

        printf("%d\n", i);

        if (i > 99) {
            break;
        }
    }
    return 0;
}
