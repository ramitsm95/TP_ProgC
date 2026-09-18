#include <stdio.h>

int main(void) {
    int a = 16;
    int b = 3;

    // 1. Addition
    printf("a + b = %d\n", a + b);

    // 2. Soustraction
    printf("a - b = %d\n", a - b);

    // 3. Multiplication
    printf("a * b = %d\n", a * b);

    // 4. Division entière
    printf("a / b = %d\n", a / b);

    // 5. Modulo (reste de la division)
    printf("a %% b = %d\n", a % b);

    // 6. Égalité (0 = faux, 1 = vrai)
    printf("a == b : %d\n", a == b);

    // 7. Supériorité (0 = faux, 1 = vrai)
    printf("a > b : %d\n", a > b);

    return 0;
}

