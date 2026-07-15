#include <stdio.h>

int Q; // Variable global, ámbito de programa [7]

void imprimir(void);

int main() {
    int A; // Variable local a main [7]
    imprimir();

    A = 124;
    Q = 1;
    printf("Global Q: %d, Local A: %d\n", Q, A);
    return 0;
}

void imprimir() {
    printf("\nQ vale %d\n", Q);
}
