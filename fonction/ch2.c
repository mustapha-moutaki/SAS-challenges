#include<stdio.h>
void produit(int a, int b);
int main(){
    int a, b;
    produit(a, b);


    return 0;
}
void produit(int a, int b){
    printf("entrer a:\t");
    scanf("%d", &a);
    printf("entrer b:\t");
    scanf("%d", &b);
    printf("%d * %d =%d");
}
