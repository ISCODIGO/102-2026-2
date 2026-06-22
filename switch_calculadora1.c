#include <stdio.h>

int main(){
    int a, b, op;
    double total;
    puts("Escriba un numero:");
    scanf("%d", &a);

    puts("Escriba un segundo numero:");
    scanf("%d", &b);

    do {

        // escribir un mensaje
        printf("Calculadora\n");
        puts("\t1. Suma");
        puts("\t2. Resta");
        puts("\t3. Multiplicacion");
        puts("\t4. Division");

        puts("Escriba una operacion:");
        scanf("%d", &op);

        switch(op) {
        case 1:
            total = a + b;
            break;
        case 4:
            total = a / (double)b;
            break;
        default:
            puts("Opcion no valida");
        }
    } while(op < 1 || op > 4);

    printf("%d ? %d = %f", a, b, total);

    /*
    una linea
    dos linea
    */
    return 0;
}
