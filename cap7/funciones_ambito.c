#include <stdio.h>

int varGlobal = 0;  // variable global

void a(void){
    varGlobal = 10;
    printf("Dentro de a()... %d\n", varGlobal);
}

void pasoPorValor(int x) {
    x = 33;
    printf("Dentro de [Valor]... %d\n", x);
}

void pasoPorReferencia(int *x){
    *x = 33;
    printf("Dentro de [Referencia]... %d\n", *x);
}


int main() {
    a();
    varGlobal = 22;
    printf("Fuera de a()... %d\n", varGlobal);

    int y = 0;
    pasoPorValor(y);

    printf("Fuera de [Valor]... %d\n", y);

    pasoPorReferencia(&y);
    printf("Fuera de [Referencia]... %d\n", y);

    return 0;
}
