#include <stdio.h>

void saisir_matrice(int (*A)[10], int *l, int *c) {
    for (int i = 0; i < *l; i++) {
        for (int j = 0; j < *c; j++) {
            printf("entrer l'élément de la ligne %d et de la colonne %d : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
}

void afficher_matrice(int (*tab)[10], int l, int c) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d  ", *((*(tab + i)) + j));
        }
        printf("\n");
    }
}

int main() {
    int l, c;
    int A[10][10];

    printf("entrer le nombre de colonnes : ");
    scanf("%d", &c);
    printf("entrer le nombre de lignes : ");
    scanf("%d", &l);

    saisir_matrice(A, &l, &c);
    afficher_matrice(A, l, c);

    return 0;
}
