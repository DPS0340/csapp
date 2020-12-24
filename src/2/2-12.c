#include <stdio.h>

int get_lsb(int);
int get_comp(int);
int get_lsb_to_one(int);

int main(void) {
    int x = 0x87654321;
    int lsb = get_lsb(x);
    int comp = get_comp(x);
    int lsb_to_one = get_lsb_to_one(x);

    printf("lsb: %x\n", lsb);
    printf("comp: %x\n", comp);
    printf("lsb_to_one: %x\n", lsb_to_one);

    return 0;
}

int get_lsb(int x) {
    return x & 0xFF;
}

int get_comp(int x) {
    int lsb = get_lsb(x);
    int comp = ~x & ~0xFF;
    return comp | lsb;
}

int get_lsb_to_one(int x) {
    return x | 0xFF;
}
