#include <stdio.h>

typedef struct {
    int codigo;
    char nombre[30];
    float precio;
} Producto;

int main() {
    FILE *archivo = fopen("productos.bin", "wb");

    if (archivo == NULL) {
        printf("Error: No se pudo crear el archivo.\n");
        return 1;
    }

    Producto productos[2] = {
        {1001, "Laptop", 899.99},
        {1002, "Mouse", 25.50}
    };

    // Escribir en formato binario (Capítulo 12, Sección 12.6)
    fwrite(productos, sizeof(Producto), 2, archivo);
    fclose(archivo);

    // Leer datos binarios (Capítulo 12, Sección 12.7)
    archivo = fopen("productos.bin", "rb");
    Producto prod;

    printf("Productos almacenados:\n");
    while (fread(&prod, sizeof(Producto), 1, archivo) == 1) {
        printf("Codigo: %d, Nombre: %s, Precio: $%.2f\n",
               prod.codigo, prod.nombre, prod.precio);
    }

    fclose(archivo);
    return 0;
}
