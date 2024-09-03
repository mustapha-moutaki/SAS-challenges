// come back later and try again
#include<stdio.h>
int main() {
    int n, i, s = 1;
   
   printf("entrer n: \n");
   scanf("%d", &n);

   for(i = 1; i <= n; i++){
    printf("%d\n", s);
    s += 2;



   }

    return 0;
}
