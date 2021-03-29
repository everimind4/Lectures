#include <stdio.h>
int main() {
    union {
        float f;
        unsigned u;
        struct {
            unsigned frac:23;
            unsigned exp:8;
            unsigned s:1;
        } t;
        struct {
            char a[4];
        } b;
    } n;
    n.u = (unsigned)0xffc00000;  
    char *v = (char *)&n.u;
    printf("0x%x 0x%x 0x%x\n", n.t.s, n.t.exp, n.t.frac);
    printf("0x%x 0x%x 0x%x 0x%x\n", n.b.a[3], n.b.a[2], n.b.a[1], n.b.a[0]);
    printf("0x%x 0x%x 0x%x 0x%x\n", *v, *(v + 1), *(v + 2), *(v + 3));
    return 0;
}
