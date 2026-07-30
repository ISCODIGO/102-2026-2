#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *archivo;
    char linea[100];

    // 1. ESCRIBIR EN UN ARCHIVO
    printf("=== ESCRIBIENDO EN ARCHIVO ===\n");
    archivo = fopen("datos.txt", "w");  // Abrir en modo escritura

    if (archivo == NULL) {
        printf("Error al abrir el archivo\n");
        return 1;
    }

    fprintf(archivo, "Hola desde C\n");
    fprintf(archivo, "Manejo de archivos\n");
    fprintf(archivo, "Linea numero 3\n");

    fclose(archivo);  // Cerrar archivo
    printf("Archivo escrito correctamente\n\n");

    // 2. LEER DEL ARCHIVO
    printf("=== LEYENDO DEL ARCHIVO ===\n");
    archivo = fopen("datos.txt", "r");  // Abrir en modo lectura

    if (archivo == NULL) {
        printf("Error al abrir el archivo\n");
        return 1;
    }

    while (fgets(linea, sizeof(linea), archivo) != NULL) {
        printf("%s", linea);
    }

    fclose(archivo);
    printf("\n");

    // 3. AGREGAR CONTENIDO AL FINAL
    printf("\n=== AGREGANDO CONTENIDO ===\n");
    archivo = fopen("datos.txt", "a");  // Abrir en modo append (agregar)

    if (archivo == NULL) {
        printf("Error al abrir el archivo\n");
        return 1;
    }

    fprintf(archivo, "Linea agregada al final\n");
    fclose(archivo);
    printf("Contenido agregado correctamente\n\n");

    // 4. LEER NUEVAMENTE PARA VER LOS CAMBIOS
    printf("=== LEYENDO NUEVAMENTE ===\n");
    archivo = fopen("datos.txt", "r");

    while (fgets(linea, sizeof(linea), archivo) != NULL) {
        printf("%s", linea);
    }

    fclose(archivo);

    return 0;
}
