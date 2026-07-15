#include <stdio.h>

int main() {
    char entrada[20];
    char entrada2[10];

    puts("Probando con scanf");
    scanf("%s", entrada);  // termina de leer con un espacio
    puts(entrada);
    scanf("%s", entrada);
    puts(entrada);

    // Limpiar el buffer de entrada
    char c;
    while ((c = getchar()) != '\n' && c != EOF);

    puts("Probando con fgets");
    fgets(entrada2, 10, stdin);
    printf("Lectura de fgets: %s\n", entrada2);
    printf("Elementos: %d\n", sizeof(entrada2) / sizeof(entrada2[0]));
    //putchar(entrada2[0]);
    return 0;
}
