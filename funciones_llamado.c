#include <stdio.h>

void c(void) {
    puts("C");
}

void b(void) {
    c();
    puts("B");
}

void a(void) {
    b();
    puts("A");
}





int main() {
    a();
    return 0;
}
