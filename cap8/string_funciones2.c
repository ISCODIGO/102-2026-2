#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int c, char *a[]) {
    int n1 = atoi(a[1]);
    printf("atoi... %d\n", n1);

    errno = 0;
    char *fin;
    long n2 = strtol(a[1], &fin, 10);

    
    if (errno != 0) {
        printf("Hubo un error: %u\n", errno);
    } else if (fin == a[1] || *fin != '\0') {
        printf("strtol: '%s' no es un numero valido\n", a[1]);
        printf("fin: '%s'\n", fin);
        printf("**fin: '%c'\n", *fin);
    } else {
        printf("strtol... %ld\n", n2);
    }
    return 0;
}
