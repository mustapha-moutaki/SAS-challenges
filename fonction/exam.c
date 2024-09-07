#include<stdio.h>
int main(){
int n, i, result, s=0;

printf("entrer le nombre des elements: \n");
scanf("%d", &n);
int T[n];

for ( i = 0; i < n; i++)
{
    printf("sisir la valeurs");
    scanf("%d", &T[i]);
}
for ( i = 0; i < n; i++)
{
    if (T[i]%2 ==0)
  
    
    printf("%d\n", T[i]*3);

}


  
    return 0;
}