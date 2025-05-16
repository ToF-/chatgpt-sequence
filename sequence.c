#include <stdio.h>

void generer_sequence(int n) {
    if (n < 1) return;
    int a = 1, b = 1;
    printf("△");
    while (a <= n) {
        a += b;
        printf("%d△", a);
        b++;
    }
    printf("\n");
}

int main() {
    int x;
    while (scanf("%d", &x) == 1) {
        generer_sequence(x);
    }
    return 0;
}

