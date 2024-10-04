#include<stdio.h>
int main(){
char str[20]="rs3";
printf("%s\n",str);
scanf("%s", str);
printf("%s\n",str);
fgets(str,sizeof(str),stdin);
printf("%s",str);
}