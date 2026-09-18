#include <stdio.h>

int main(void) {
    int num1 = 12;
    int num2 = 5;
    char op = '&'; // À tester avec : '+', '-', '*', '/', '%', '&', '|', '~'

    switch (op) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
            } else {
                printf("Erreur : division par zéro !\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            } else {
                printf("Erreur : modulo par zéro !\n");
            }
            break;
        case '&': // ET bit à bit
            printf("%d & %d = %d\n", num1, num2, num1 & num2);
            break;
        case '|': // OU bit à bit
            printf("%d | %d = %d\n", num1, num2, num1 | num2);
            break;
        case '~': // NON bit à bit (opérateur unaire)
            printf("~%d = %d\n", num1, ~num1);
            break;
        default:
            printf("Opérateur '%c' inconnu.\n", op);
            break;
    }

    return 0;
}
