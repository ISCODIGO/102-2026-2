#include <stdio.h>

int main () {
    int a[] = {10, 20, 30, 40, 50, 60};
    int *p = a;

    int size = sizeof(a) / sizeof(a[0]);
    int *fin = a + (size);

    while(p < fin) {
        printf("%d\n", *p);
        p++;
    }
    return 0;
}
