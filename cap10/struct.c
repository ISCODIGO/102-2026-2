#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int anio;
} fecha;


void imprimir_fecha(fecha);

int main() {
    fecha f1;
    f1.dia = 5;
    f1.mes = 10;
    f1.anio = 2024;

    fecha f2 = {22, 7, 2026};


    imprimir_fecha(f2);

    return 0;
}

void imprimir_fecha(fecha fec) {
    printf("%02d-%02d-%04d", fec.dia, fec.mes, fec.anio);
}
