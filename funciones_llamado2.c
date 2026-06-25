#include <stdio.h>

int intercambio(int* a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10, b = 20;

    printf("A: %d y B: %d\n", a, b);

    intercambio(&b, &a);

    printf("A: %d y B: %d\n", a, b);

    return 0;
}

