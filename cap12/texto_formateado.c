#include <stdio.h>

struct Estudiante {
    int id;
    char nombre[50];
    float calificacion;
};

int main() {
    FILE *archivo = fopen("estudiantes.txt", "w");

    if (archivo == NULL) {
        printf("Error: No se pudo crear el archivo.\n");
        return 1;
    }

    // Escribir datos estructurados (Capítulo 12, Sección 12.5)
    struct Estudiante est1 = {101, "JuanPerez", 85.5};
    struct Estudiante est2 = {102, "MariaGarcia", 92.0};

    fprintf(archivo, "%d %s %.1f\n", est1.id, est1.nombre, est1.calificacion);
    fprintf(archivo, "%d %s %.1f\n", est2.id, est2.nombre, est2.calificacion);

    fclose(archivo);

    // Leer datos formateados
    archivo = fopen("estudiantes.txt", "r");

    if (archivo == NULL) {
        printf("Error: No se pudo abrir el archivo para lectura.\n");
        return 1;
    }

    struct Estudiante est;

    printf("Estudiantes registrados:\n");
    while (fscanf(archivo, "%d %s %f", &est.id, est.nombre, &est.calificacion) == 3) {
        printf("ID: %d, Nombre: %s, Calificacion: %.1f\n",
               est.id, est.nombre, est.calificacion);
    }

    fclose(archivo);
    return 0;
}
