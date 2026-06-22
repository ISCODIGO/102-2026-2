#include <stdio.h>
int main() {
    const int PI = 3.14159;
    //const int DOMINGO = 0;
    //const int LUNES = 1;
    //const int MARTES = 2;

    enum Dias { DOM, LUN = 20, MAR, MIE, JUE, VIE, SAB };

    enum Dias diaActual;  // DiaActual es un variable que permite usar Dias

    diaActual = LUN;  // Asignacion de un tipo enum
    printf("Hoy es: %d\n", diaActual);

    if (diaActual == DOM || diaActual == SAB) {
        puts("Es fin de semana");
    } else {
        puts("No es fin de semana, hay trabajar/estudiar");
    }


    switch(diaActual){
    case LUN:
        puts("Lunes");
        break;
    case MAR:
        puts("Martes");
        break;
    default:
        puts("Dia invalido");
    }


    return 0;
}
