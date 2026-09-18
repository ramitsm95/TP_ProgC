#include <stdio.h>

int main(void) {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        // 1. Espaces pour centrer la ligne
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // 2. Chatons jusqu'au centre
        for (int j = 1; j <= i; j++) {
            printf("🐱");
        }

        // 3. Chatons depuis le centre
        for (int j = i - 1; j >= 1; j--) {
            printf("🐱");
        }

        printf("\n");
    }

    printf("\nGénération de la pyramide terminée.\n");

    return 0;
}
