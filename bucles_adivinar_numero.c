#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    const int LIMITE_MAX = 100;
    const int INTENTOS = 7;

    srand(time(NULL));  // Generacion de una semilla
    int secreto = 1 + rand() % LIMITE_MAX;  // [1, LIMITE]
    int candidato;
    int intento_actual = 1;

    printf("SECRETO: %d", secreto);

    do {
        // leer el candidato
        printf("Escriba un numero del 1 al 100: ");
        scanf("%d", &candidato);

        // verificar si es el correcto
        if (secreto == candidato) {
            // encontrado el ganador
            puts("Acertaste!!");
            break;
        } else if (candidato > secreto) {
            puts("Bajale!!");
        } else if (candidato < secreto) {
            puts("Subele!!");
        }

        intento_actual++;

    } while(intento_actual <= INTENTOS);


    return 0;
}
