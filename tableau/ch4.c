#include<stdio.h>
int main() {

    int n, i, s = 0, max;

    printf("entrer le nombre des elements:\n");
    scanf("%d", &n);
    int T[n];
    for ( i = 0; i < n; i++){
        printf("entrer l'element n%d: ", i+1);
        scanf("%d", &T[i]);

    }
    // on supose que T[0]est le max
    max = T[0];
   
    for ( i = 0; i < n; i++){
        if (max < T[i])
    {
        max =T[i] ;
    }
    }
    
    
    printf("%d", max);
    

    return 0;
}