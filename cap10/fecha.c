#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int anio;
} Fecha;

struct x {
    int dato;
};

int crearFecha(Fecha*, int, int, int);
int bisiesto(int);

int main() {
    Fecha f1;
    int creado = crearFecha(&f1, 30, 9, 2026);
    if (creado) {
        puts("Fecha creada");
    } else {
        puts("No pudo crearse");
    }

    return 0;
}

int crearFecha(Fecha *f, int d, int m, int y) {
    // Los años deben estar entre 1900 y 2100
    // Los meses entre 1 y 12
    // Los dias entre 1 y 31
    if (d <= 0 || m <= 0 || y < 1900 || d > 31 || m > 12 || y > 2100) {
        return 0;
    }

    // Solo ciertos meses pueden tener 31 dias
    if (m == 4 || m == 6 || m == 9 || m == 11) {
        if (d == 31) {
            return 0;
        }
    }

    // Febrero solo puede tener 28 dias a menos que
    // el año sea bisiesto puede tener 29
    if (m == 2 && d > 28) {
        if (bisiesto(y) && d > 29) {
            return 0;
        }
        return 0;
    }

    f->anio = y;
    f->mes = m;
    f->dia = d;
    return 1;
}

int bisiesto(int anio) {
    // El año debe ser divisible por 4
    // pero no por 100 a menos que sea divisible por 400
    // Ej: 1900 (no es), 2000 (si es), 1996 (si es)
    return 0;
}
