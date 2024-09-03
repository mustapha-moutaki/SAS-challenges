#include<stdio.h>
int main() {
    int nT, i;


    printf("entrer le nombre d'elements de tableau\n");
    scanf("%d", &nT);

    int T[nT];
    for(i = 1; i <=nT; i++){
        printf("entrer le %d element:", i);
        scanf("%d", &T[i]);


    }  
    for(i = 1; i <=nT; i++){
            printf("%d\n", T[i]);
        }

    return 0;
}