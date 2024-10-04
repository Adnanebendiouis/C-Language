#include <stdio.h>
void affichier_tab(int A[], int b)
{
    for (int i = 0; i < b; i++)
    {
        printf("%d \n", A[i]);
    }
}
double moyenne_tab(int A[], int n)
{
    double moyenne = 0;
    for (int i = 0; i < n; i++)
    {
        moyenne += A[i];
    }
    moyenne /= n;
    return moyenne;
}
int main()
{
    int A[100] ;
    
    for(int i=0;i<100;i++){
        printf("entrer note %d :",i+1);
        scanf("%d",&A[i]);
    }
    affichier_tab(A, 4);
    double moyenne;
    moyenne = moyenne_tab(A, 4);
    printf("la moyenne = %f", moyenne);
}