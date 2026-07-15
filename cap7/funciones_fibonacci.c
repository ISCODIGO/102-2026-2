/*
Serie Fibonacci: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...

Fibo(0) = 0
Fibo(1) = 1
------------
Fibo(2) = Fibo(1) + Fibo(0) = 1
Fibo(3) = Fibo(2) + Fibo(1) = 2
Fibo(4) = Fibo(3) + Fibo(2) = 3
Fibo(5) = Fibo(4) + Fibo(3) = 5
------------
Fibo(n) = Fibo(n-1) + Fibo(n-2)


Fibo(n) {n, 0 <= n <= 1; Fibo(n-1) + Fibo(n-2), n > 1

*/

#include<stdio.h>
long long fibonacci(int);
long long fibonacci2(int);

unsigned int recursiones;

int main() {
    int x = 50;
    long long f = fibonacci2(x);
    printf("El fibonacci #%d es %lld\n", x, f);
    printf("Las recursiones fueron: %u", recursiones);
    return 0;
}

long long fibonacci(int n) {
    recursiones++;
    // Casos base
    if (n == 0) return 0;
    if (n == 1) return 1;
    // Caso recursivo
    return fibonacci(n-1) + fibonacci(n-2);
}

long long fibonacci2(int n) {
    long long penultimo = 0;
    long long ultimo = 1;
    long long nuevo;

    if (n == 0) return penultimo;
    if (n == 1) return ultimo;

    for (int i = 2; i <= n; i++) {
        nuevo = ultimo + penultimo;
        penultimo = ultimo;
        ultimo = nuevo;
    }

    return ultimo;
}


/*

El fibonacci #50 es 12586269025
Las recursiones fueron: 2075316483
Process returned 0 (0x0)   execution time : 106.528 s

El fibonacci #50 es 12586269025
Las recursiones fueron: 0
Process returned 0 (0x0)   execution time : 0.103 s

*/
