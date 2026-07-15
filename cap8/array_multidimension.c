#include <stdio.h>

int main() {
    int tabla[2][3] = {
        {51, 52, 53},
        {54, 55, 56}
    };

    int tabla2[2][3] = {51, 52, 53, 54, 55};

    int fila, col;
    printf("Indicar fila: ");
    scanf("%d", &fila);
    printf("Indicar columna: ");
    scanf("%d", &col);

    printf("\ntabla[%d][%d] = %d", fila, col,
           tabla[fila][col]);

    return 0;
}
