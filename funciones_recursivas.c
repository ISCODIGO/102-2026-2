#include<stdio.h>

// prototipo de una funcion
void recursiva(void);

// variable global
int repeticiones;

int main() {
    recursiva();
    return 0;
}

// declaracion de la funcion
void recursiva() {
    if (repeticiones <= 5) {
        printf("Recursion: %d\n", repeticiones++);
        recursiva();
    }
}

//
