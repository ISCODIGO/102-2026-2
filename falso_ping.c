#include <stdio.h>

int main(int c, char *args[])
{
    printf("El programa es: %s\n", args[0]);

    printf("El primer argumento extra es: %s\n", args[1]);
    printf("El segundo argumento extra es: %s\n", args[2]);

    return 0;
}
