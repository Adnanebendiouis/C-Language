#include<stdio.h>

void saisir_dimension(int *l, int l_max, int *c, int c_max) {
    do {
        if (*c > c_max) {
            printf("re-enter c so c<=%d :\n", c_max);
            scanf("%d", c);
        }
        if (*l > l_max) {
            printf("re-enter L so L<=%d : \n", l_max);
            scanf("%d", l);
        }
    } while (*c > c_max || *l > l_max);
}

void saisir_matrice(int A[][10], int l, int c) {
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            printf("enter the element of row %d and column %d : ", i, j);
            scanf("%d", &A[i][j]); 
        }
    }
}

void afficher_matrice(int tab[][10], int l, int c) {
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d  ", tab[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int l, c;
    int A[10][10];
    printf("enter the number of columns: ");
    scanf("%d", &c);
    printf("enter the number of rows: ");
    scanf("%d", &l);
    
    saisir_dimension(&l, 10, &c, 10); 
    saisir_matrice(A, l, c);
    afficher_matrice(A, l, c);
    
    return 0;
}
