#include <stdio.h>
int main() {
    // definir los dias de semana segun la numeracion
    // 0: lunes, 1: martes, 2: miercoles,

    int dia = 4;

    switch(dia) {
        case 0: puts("Lunes"); break;
        case 1: puts("Martes"); break;
        case 2: puts("Mircoles"); break;
        case 3: puts("Jueves"); break;
        case 4: puts("Viernes"); break;
        case 5: puts("Sabado"); break;
        case 6: puts("Domingo"); break;
        default: puts("**Error**");
    }

    switch(dia) {
        case 1: case 3: case 5:  // efecto cascada
            puts("Dias impares"); break;
        case 0: case 2: case 4: case 6:
            puts("Dias pares"); break;
    }

    char letra = '.';

    switch(letra) {
    case 'a': case 'e': case 'i': case 'o': case 'u':
        puts("Es vocal"); break;
    case 'A': case 'E': case 'I': case 'O': case 'U':
        puts("Es vocal en mayuscula"); break;
    default:
        puts("Tal vez es una consonante o un simbolo");
    }

    if (0.1 + 0.2 == 0.3) {
        puts("Es igual");
    } else {
        puts("Deberia ser igual, cierto?");
    }

    return 0;
}
