#include <stdio.h>

int bis(int x, int m) {
    return x | m;
}
int bic(int x, int m) {
    return x & ~m;
}

int bool_or(int x, int y) {
    int result = bis(x, y);
    return result;
}
int bool_xor(int x, int y) {
    int result = bis(bic(bis(x, y), y), bic(bis(x, y), x));
    return result;
}

int main(void) {
    int a = 1;
    int b = 3;

    printf("bool_or: %d", bool_or(a, b));
    printf("bool_xor: %d", bool_xor(a, b));

    return 0;
}