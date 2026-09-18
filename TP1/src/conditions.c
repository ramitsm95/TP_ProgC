#include <stdio.h>

int main(void) {
    int somme = 0;

    for (int i = 1; i <= 1000; i++) {
        // 1. Si le nombre est divisible par 11, on passe au suivant
        if (i % 11 == 0) {
            continue;
        }

        // 2. Si le nombre est divisible par 5 OU par 7
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;

            // 3. Si la somme dépasse 5000, on arrête tout immédiatement
            if (somme > 5000) {
                break;
            }
        }
    }

    // 4. Affichage du résultat final
    printf("Somme finale = %d\n", somme);

    return 0;
}