#include<stdio.h>
void maximum(int T[],int n){
    int max = 0;
    int indice=0;
    for(int i=0 ;i<n;i++){
        if(max<T[i]){
                max=T[i];
        }
      indice=i;
    }
      

        printf("le maximum =%d\n",max);
        printf("l'indice dans le tableau : %d\n",indice);
        printf("l'adress du max : %p\n",&T[indice]);
}
int main(){
int A[10] = {10 , 21 , 34, 65 , 77 };
maximum(A,5);
}
