#include<stdio.h>
int main(){
    int n, i, s;

    printf("entrer le nombre: \t");
    scanf("%d", &n);

s = 0;
    for(i = 1; i <= n; i++){
        s = s + i;
    }
    printf("%d", s);

    return 0;
}