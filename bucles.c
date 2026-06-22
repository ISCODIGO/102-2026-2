#include <stdio.h>

int main(){
    // Imprimir los numeros impares del 1 al 99
    // bucles -> repeticion

    /* Partes:
        1. inicializacion,
        2. condicion (false -> para, true -> continuar)
        3. actualizacion

       Tipos:
        1. While: primera evalua, despues repite
        2. Do-While: primera se repite (1 vez), luego evalua.
    */

    puts("While");
    int numero = 1;  // inicializacion
    while(numero <= 99) {  // condicion
        // repetirse
        printf("%d\n", numero);
        numero = numero + 1;  // actualizacion
    }

    puts("\nDo While");

    numero = 1;
    do {
        printf("%d\n", numero);
        numero += 2;
    }while(numero <= 99);

    puts("\nFor");

    for(int i = 1; i <= 99; i += 2) {
        printf("%d\n", i);
    }

    return 0;  // <-- Fin
}
