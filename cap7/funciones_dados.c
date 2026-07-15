#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int azar(int minimo, int maximo) {
    return minimo + rand() % (maximo - minimo + 1);
}

int dado() {
    return azar(1, 6);
}

int main() {
    srand(time(NULL));
    for(int i = 0; i < 10; i++) {
        printf("Lanzamiento #%d = %d\n", i + 1, dado());
    }
    return 0;
}
