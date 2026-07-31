#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// EJEMPLO 1: LECTURA DE CARACTERES INDIVIDUALES
void lectura_caracteres() {
    printf("\n=== LECTURA DE CARACTERES INDIVIDUALES ===\n");
    FILE *archivo = fopen("datos.txt", "r");

    if (archivo == NULL) {
        perror("Error al abrir");
        return;
    }

    int c;  // char se castea a int para detectar EOF
    int contador = 0;

    while ((c = fgetc(archivo)) != EOF) {  // fgetc lee un carácter
        if (c == '\n') {
            contador++;
        }
    }

    printf("Total de lineas: %d\n", contador);
    fclose(archivo);
}

// EJEMPLO 2: LECTURA DIRECTA EN ESTRUCTURA
typedef struct {
    char nombre[50];
    int edad;
    float promedio;
} Estudiante;

void escribir_estructura() {
    printf("\n=== ESCRIBIENDO ESTRUCTURA BINARIA ===\n");
    FILE *archivo = fopen("estudiantes.bin", "wb");  // wb = write binary

    if (archivo == NULL) {
        perror("Error al crear archivo");
        return;
    }

    Estudiante est[2] = {
        {"Juan", 20, 8.5},
        {"Maria", 21, 9.2}
    };

    // fwrite escribe bloques de datos
    size_t escritos = fwrite(est, sizeof(Estudiante), 2, archivo);
    printf("Registros escritos: %zu\n", escritos);

    fclose(archivo);
}

void leer_estructura() {
    printf("\n=== LEYENDO ESTRUCTURA BINARIA ===\n");
    FILE *archivo = fopen("estudiantes.bin", "rb");  // rb = read binary

    if (archivo == NULL) {
        perror("Error al abrir archivo");
        return;
    }

    Estudiante est;
    int i = 0;

    // fread lee bloques de datos
    while (fread(&est, sizeof(Estudiante), 1, archivo) == 1) {
        printf("Registro %d: %s, %d años, promedio: %.2f\n",
               i++, est.nombre, est.edad, est.promedio);
    }

    fclose(archivo);
}

// EJEMPLO 3: MANEJO AVANZADO DE ERRORES
void manejo_errores() {
    printf("\n=== MANEJO AVANZADO DE ERRORES ===\n");
    FILE *archivo = fopen("noexiste.txt", "r");

    if (archivo == NULL) {
        // perror muestra el error del sistema
        perror("Error al abrir noexiste.txt");
        printf("Codigo de error: %d\n", ferror(archivo));
        return;
    }

    fclose(archivo);
}

// EJEMPLO 4: POSICIONAMIENTO EN ARCHIVO
void posicionamiento() {
    printf("\n=== POSICIONAMIENTO EN ARCHIVO ===\n");

    // Crear archivo de prueba
    FILE *archivo = fopen("posicion.txt", "w");
    fprintf(archivo, "0123456789");
    fclose(archivo);

    // Leer con posicionamiento
    archivo = fopen("posicion.txt", "r");

    // ftell retorna posición actual
    printf("Posicion inicial: %ld\n", ftell(archivo));

    int c = fgetc(archivo);
    printf("Leido: %c, Posicion: %ld\n", c, ftell(archivo));

    // fseek cambia la posición
    fseek(archivo, 5, SEEK_SET);  // Ir a posición 5
    c = fgetc(archivo);
    printf("Leido desde posicion 5: %c\n", c);

    fseek(archivo, -3, SEEK_END);  // 3 caracteres antes del final
    c = fgetc(archivo);
    printf("Leido desde -3 del final: %c\n", c);

    fclose(archivo);
}

// EJEMPLO 5: LECTURA Y ESCRITURA SIMULTÁNEA
void lectura_escritura() {
    printf("\n=== LECTURA Y ESCRITURA SIMULTÁNEA ===\n");
    FILE *entrada = fopen("datos.txt", "r");
    FILE *salida = fopen("datos_copia.txt", "w");

    if (entrada == NULL || salida == NULL) {
        perror("Error al abrir archivos");
        return;
    }

    char linea[100];
    int numero_linea = 1;

    while (fgets(linea, sizeof(linea), entrada) != NULL) {
        fprintf(salida, "%d: %s", numero_linea++, linea);
    }

    printf("Archivo copiado con numeracion\n");
    fclose(entrada);
    fclose(salida);
}

// EJEMPLO 6: LECTURA CON VALIDACIÓN DE EOF Y ERROR
void lectura_validada() {
    printf("\n=== LECTURA CON VALIDACION ===\n");
    FILE *archivo = fopen("datos.txt", "r");

    if (archivo == NULL) {
        perror("Error al abrir");
        return;
    }

    char linea[100];
    int resultado;

    while (fgets(linea, sizeof(linea), archivo) != NULL) {
        printf("Linea: %s", linea);
    }

    // Verificar si salió por error o por EOF
    if (feof(archivo)) {
        printf("Fin de archivo alcanzado correctamente\n");
    } else if (ferror(archivo)) {
        printf("Error al leer archivo\n");
    }

    fclose(archivo);
}

int main() {
    printf("EJEMPLOS AVANZADOS DE MANEJO DE ARCHIVOS\n");
    printf("==========================================\n");

    lectura_caracteres();
    escribir_estructura();
    leer_estructura();
    manejo_errores();
    posicionamiento();
    lectura_escritura();
    lectura_validada();

    return 0;
}
