#include <stdio.h>

int main() {
    char frase[] = "Hola";

    char *p = frase;

    putchar(*(p+3));
    putchar('\n');

    printf(frase);
    return 0;
}
