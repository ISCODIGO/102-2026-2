#include <stdio.h>

int main() {
    char frase[] = "Hola";

    //char *p = frase;

    //putchar(*(p+3));
    //putchar('\n');

    puts(frase);
    printf("%c\n", frase[1]);

    frase[2] = 'L';
    puts(frase);

    return 0;
}
