#include <stdio.h>
#include <string.h>

int main(int c, char *as[]) {

    size_t s = strlen(as[1]);

    puts(as[1]);
    printf("El tamaño es: %d\n", s);

    strncat(as[1], " esto es concatenado", 5);
    puts(as[1]);
    printf("El nuevo tamano es: %d\n", strlen(as[1]));

    char *frase = "hola mundo";
    char *copia;
    strcpy(copia, frase);
    puts(copia);
    return 0;
}
