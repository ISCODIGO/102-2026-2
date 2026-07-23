// funcion que dada una cadena devuelva: # vocales, # consonantes, # digitos

#include <stdio.h>
#include <ctype.h>

void contar(char[]);

int main() {
    contar("Hola- mundo, 2026.");
    return 0;
}

void contar(char cadena[]) {
    int pos = 0;
    int vocales, consonantes, digitos;
    vocales = consonantes = digitos = 0;

    while (cadena[pos]!= '\0') {
        char letra = cadena[pos];

        if (isdigit(letra)) {
            digitos++;
        }

        if (isalpha(letra)) {
            // vocales y consonantes
            char letraMin = tolower(letra);  // convierte a minuscula
            if (letraMin == 'a' || letraMin == 'e' || letraMin == 'i'
                || letraMin == 'o' || letraMin == 'u') {
                vocales++;
            } else {
                consonantes++;
            }
        }
        //printf("%c", cadena[pos]);
        pos++;
    }

    printf("Vocales: %d\nConsonantes: %d\nDigitos: %d",
           vocales, consonantes, digitos);
}
