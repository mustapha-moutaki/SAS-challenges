#include<stdio.h>
int main() {
   
   int n, i, min;

    printf("entrer le nombre des elements:\n");
    scanf("%d", &n);
    int T[n];

    for ( i = 0; i < n; i++)
    {
        printf("entrer le nombre: \t");
        scanf("%d", &T[i]);
    }
    min = T[0];

    for ( i = 0; i < n; i++){
        if (min > T[0])
        {
            min= T[i];
        }
        
    }
    printf("%d", min);
    
    return 0;
}