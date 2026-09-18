#include <stdio.h>

int main(void) {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int nb_elements = 5;

    for (int k = 0; k < nb_elements; k++) {
        int n = nombres[k];
        printf("%5d en binaire : ", n);

        int commence = 0; // Permet de ne pas afficher les '0' inutiles tout à gauche

        // Un entier 'int' s'étale sur 32 bits (de l'indice 31 à 0)
        for (int i = 31; i >= 0; i--) {
            // Decalage vers la droite (n >> i) suivi d'un ET bit à bit (& 1)
            int bit = (n >> i) & 1;

            if (bit == 1) {
                commence = 1; // On trouve le premier '1' significatif
            }

            if (commence) {
                printf("%d", bit);
            }
        }

        // Cas particulier où le nombre vaut 0
        if (!commence) {
            printf("0");
        }

        printf("\n");
    }

    return 0;
}