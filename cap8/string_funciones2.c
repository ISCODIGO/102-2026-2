#include <stdio.h>
#include <stdlib.h>
#include <errno.h>


int entero_valido(char*, int*);

int main(int c, char *a[]) {
    int n1 = atoi(a[1]);
    printf("atoi... %d\n", n1);

    int err;
    int n2 = entero_valido(a[1], &err);

    if (err) {
        puts("No se pudo obtener un valor con strtol");
    } else {
        printf("strtol... %d\n", n2);
    }
    return 0;
}


int entero_valido(char *cad, int *error){
    errno = 0;
    char *finPtr;
    int n = strtol(cad, &finPtr, 10);

    if (errno != 0 || finPtr == cad || *finPtr != '\0') {
        *error = 1;
    } else {
        *error = 0;
    }

    return n;
}
