/*

calculadora.exe + 10 20

puntero[0] -> nombre-del-programa
puntero[1] -> "+"
puntero[2] -> "10"
puntero[3] -> "20"

*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int c, char *args[])
{
    if (c >= 4) {
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
            case '*':
                resultado = n1 * n2;
                break;
            case '/':
                resultado = n1 / n2;
                break;
            case '%':
                resultado = (int)n1 % (int)n2;
                break;
            case '^':
                resultado = pow(n1, n2);
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
