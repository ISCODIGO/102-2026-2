/*
Crear programa que pida al usuario definir una hora (24h)
y realice los siguientes saludos:
    - [6, 11]: Buenos dias
    - [12]: Ya es mediodia
    - [13, 18]: Buenas tardes
    - [19, 23]: Buenas noches
    - [0, 5]: Deberias estar dormido
*/

#include <stdio.h>

int main() {
    int hora;

    printf("Escriba una hora [0 - 23]: ");
    scanf("%d", &hora);

    if (hora >= 0 && hora <= 5) {
        puts("Deberias estar dormido");
    } else if (hora >= 6 && hora <= 11) {
        puts("Buenos dias");
    } else if (hora == 12) {
        puts("Ya es mediodia");
    } else if (hora > 12 && hora < 19) {
        puts("Buenas tardes");
    } else if (hora >= 19 && hora <= 23) {
        puts("Buenas noches");
    } else {
        puts("*** Hora no valida ***");
    }

    return 0;
}
