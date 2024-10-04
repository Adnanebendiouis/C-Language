#include <stdio.h>
void afficher_matrice(int tab[][4], int l, int c) {
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d  ", tab[i][j]);
        }
        printf("\n");
    }
}
void somme_matrices(int A[][4],int T[][4],int l,int c){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            T[i][j]+=A[i][j];
        }
    }
}
void tanspo_matrice(int M[][4], int l, int c){
    int temp[4][4]={{0}};
     for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            temp[i][j]=M[i][j];
        }
     }
       for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            M[i][j]=temp[j][i];
        }
     }
     
}
int main(){
    int A[10][4]={{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    int B[10][4]={{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    int c,l;
    printf("enter the number of columns: ");
    scanf("%d", &c);
    printf("enter the number of rows: ");
    scanf("%d", &l);
    somme_matrices(A,B,l,c);
    afficher_matrice(B,l,c);
    tanspo_matrice(A,l,c);
    afficher_matrice(A,l,c);
}