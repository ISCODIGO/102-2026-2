#include "stdio.h"
int main() {
    char c = 90;
    printf("%c\n", c);

    int x = 0xffa;
    printf("%d\n", x);

    char st[21]="Todo puede hacerse.";
    puts(st);
    puts(&st[1]);

    return 0;
}
