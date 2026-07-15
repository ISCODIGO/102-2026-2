#include <stdio.h>
#include <stdlib.h>

// calculadora.exe + 1 2

int main(int c, char *args[])
{
    //printf("El programa es: %s\n", args[0]);
    //printf("El primer argumento extra es: %s\n", args[1]);
    //printf("El segundo argumento extra es: %s\n", args[2]);

    if (c >= 2) {
        char operador = args[1][0];
        float n1 = atof(args[2]);
        float n2 = atof(args[3]);
        float resultado;

        int valido = 1;

        switch(operador) {
            case '+':
                resultado = n1 + n2;
                break;
            case '-':
                resultado = n1 - n2;
                break;
            case '/':
                resultado = n1 / n2;
                break;
            default:
                puts("** Operacion no valida **");
                valido = 0;
        }

        if (valido) {
            printf("%f %c %f = %f", n1, operador, n2, resultado);
        }
    }

    return 0;
}
