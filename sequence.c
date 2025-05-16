#include <stdio.h>

void generer_sequence(int n) {
    if (n == 1) {
        printf("△\n");
        return;
    }
    if (n == 2) {
        printf("2△\n");
        return;
    }

    int valeur = 3;
    int incr = 2;
    printf("△3△");
    while (valeur < n) {
        valeur += incr;
        printf("%d△", valeur);
        incr++;
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

