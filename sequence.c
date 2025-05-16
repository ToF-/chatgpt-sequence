#include <stdio.h>

void generer_sequence(int n) {
    int valeur = 2;
    int incr = 2;
    while (valeur <= n) {
        printf("△%d", valeur);
        valeur += incr;
        incr++;
    }
    printf("△\n");
}

int main() {
    int x;
    while (scanf("%d", &x) == 1) {
        generer_sequence(x);
    }
    return 0;
}

