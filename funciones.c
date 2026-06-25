
// salida nombre(entrada1, entrada2, etc)

#include<stdio.h>

int sumar(int a, int b) {
    return a + b;
}

void f(void){
    return;
}

int main(void) {
    int total = sumar(3, 5);
    //f(2);
    //f(2, 3);
    printf("%d", total);
    return 0;
}
