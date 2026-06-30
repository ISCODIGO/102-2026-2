#include <stdio.h>


/*
    Factorial
    5! = 5 * 4 * 3 * 2 * 1
       = 5 * 4!

    n! = n * (n - 1)!

    1! = 1
    0! = 1

    14! = 1,278,945,280
    15! = 2,004,310,016
    16! = 2,004,189,184 <-- erroneo
    17! = 4,006,445,056

*/


long long factorial(int);  // prototipo

int main() {
    int n = 17;
    long long f = factorial(n);  // llamado
    printf("El factorial %d es %lld", n, f);

    return 0;
}

long long factorial(int n) {
    if (n == 1) {
        return 1;
    }

    return n * factorial(n-1);
}
