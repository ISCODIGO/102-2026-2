#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char cs[] = "xx1234.56";
    float numero = atof(cs);

    numero++;
    printf("%.2f", numero);

    return 0;
}
