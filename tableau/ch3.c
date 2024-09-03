#include<stdio.h>
int main() {
   
   int n, i, s = 0;

   printf("entrer le nombre des elements de tableau:\n");
   scanf("%d", &n);
   int T[n];

   for ( i = 1; i <= n; i++){
    printf("entrer le nombre %d: ", i+1);
    scanf("%d", &T[i]);
    s = s + T[i];
   }
   
   printf("%d", s);
   

    return 0;
}