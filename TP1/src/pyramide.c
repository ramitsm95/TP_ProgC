#include <stdio.h>

int main(void) {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        // 1. Espaces pour centrer la ligne
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // 2. Nombres croissants de 1 à i
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3. Nombres décroissants de i - 1 à 1
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    printf("\nGénération de la pyramide terminée.\n");

    return 0;
}
