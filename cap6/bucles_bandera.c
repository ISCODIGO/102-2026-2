#include<stdio.h>
#include<stdbool.h>
int main() {
    /*
    Generar numeros impares del 1 al 99.
    Pero cada 3 numeros le voy a consultar al
    usuario si el programa o no.
    */

    int i = 1;
    bool seguir = true;
    int contador = 0;
    while (seguir) {
        printf("%d\n", i);

        if (i >= 99) {
            seguir = false;
        }

        contador++;

        if (contador == 3) {
            // preguntar si continua o no
            int opcion;
            printf("\n1. Terminar... Escriba otra tecla para continuar. ");
            scanf("%d", &opcion);

            if (opcion == 1) {
                seguir = false;
            }

            contador = 0;
        }

        i += 2;
    }
    return 0;
}
