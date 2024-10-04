#include<stdio.h>
int carre(int c,int l){
    if(c==l){
        return 1;
    }
    else{
        return 0;
    }
}
int Somme_Ligne(int T[][4], int c, int nmrl) {
    int somme = 0;
    for (int i = 0; i < c; i++) {
        somme += T[nmrl][i]; 
    }
    return somme;
}
int Somme_Colonne(int T[][4], int l, int nmrc) {
    int somme = 0;
    for (int i = 0; i < l; i++) {
        somme += T[i][nmrc]; 
    }
    return somme;
}
int Somme_Diagonale(int A[][4],int l){
    int somme=0;
    for(int i=0;i<l;i++){
        for(int j=0 ;j<=i;j++){
            somme+=A[i][j];
        }
    }
    return somme;
}
int main() {
    int A[4][4] = {{1, 1, 1, 1}, {2, 2, 2, 2},{3,3,3,3},{4, 4, 4, 4}};
    int c, l;
    printf("%d\n",A[1][0]);
    
    printf("enter the number of columns: ");
    scanf("%d", &c);
    printf("enter the number of rows: ");
    scanf("%d", &l);
     int sommel = Somme_Ligne(A, c, 1);
    printf("Sum of row 1: %d\n", sommel);
    int sommec=Somme_Colonne(A,c,0);
    printf("Sum of column 0 : %d\n",sommec);
    int SommeDiagonale=Somme_Diagonale(A,l);
    printf("somme diagonale =%d",SommeDiagonale);
   
}