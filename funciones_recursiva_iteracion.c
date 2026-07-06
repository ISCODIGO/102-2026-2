#include <stdio.h>


void bucle(int, int);

int main() {
    bucle(10, 1);
    return 0;
}

void bucle(int limite, int iteracion) {
    // imprimir numeros desde 1 hasta n
    if (iteracion > limite) {
        return;  // escapo de la funcion
    }

    printf("%d\n", iteracion);
    bucle(limite, ++iteracion);
}

/*

bucle/iteracion: do-while, while, for
recursion

bucle > recursion (memoria)


*/
