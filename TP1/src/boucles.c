#include <stdio.h>

int main(void) {
    int compteur = 5; // Valeur strictly inférieure à 10

    if (compteur >= 10 || compteur <= 0) {
        printf("Le compteur doit être compris entre 1 et 9.\n");
        return 1;
    }

    /* --- Version 1 : Boucles FOR --- */
    printf("--- Version FOR ---\n");
    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            // Affiche '*' sur la première colonne (j==1), la dernière (j==i) 
            // ou toute la dernière ligne (i==compteur)
            if (j == 1 || j == i || i == compteur) {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n");
    }

    printf("\n");

    /* --- Version 2 : Boucles WHILE --- */
    printf("--- Version WHILE ---\n");
    int i = 1;
    while (i <= compteur) {
        int j = 1;
        while (j <= i) {
            if (j == 1 || j == i || i == compteur) {
                printf("* ");
            } else {
                printf("# ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}