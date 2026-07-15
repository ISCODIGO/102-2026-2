#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int c, char *a[]) {
    int n1 = atoi(a[1]);
    int n2 = strtol(a[1], (char**)NULL, 10);

    printf("atoi... %d\n", n1);
    printf("strol... %d\n", n2);

    if (errno != 0) {
        printf("Hubo un error: %u", errno);
    }
    return 0;
}
