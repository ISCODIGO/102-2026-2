#include <stdio.h>


struct S1 {
    int entero;  // 4B
    float flotante;  // 4B
    char caracter;  // 1B
};

// typedef permite generar un alias a la estructura
typedef struct {
    int entero;  // 4B
    float flotante;  // 4B
    char caracter;  // 1B
} S2;

typedef union {
    //long long entero;  // 8B
    //float flotante;  // 4B
    char caracter;  // 1B
} U1;

void a(struct S1);

void b(S2);

int main() {
    struct S1 estructura1;
    estructura1.entero = 10;
    estructura1.caracter = 'G';
    estructura1.flotante = 45.67;

    S2 estructura2 = {45, 'A', 23.33};

    printf("Cuanto mide la estructura: %d\n",
           sizeof(estructura1));

    printf("Cuanto mide la estructura: %d\n",
       sizeof(estructura2));

    U1 union1;
    union1.caracter = 'A';  // no esta definido en memoria
    //union1.flotante = 44.33;

    printf("Se puede 'A'? -> %c\n", union1.caracter);

    printf("Cuanto mide la union: %d\n",
       sizeof(union1));


    return 0;
}
