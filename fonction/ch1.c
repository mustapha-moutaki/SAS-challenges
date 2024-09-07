#include<stdio.h>
void somme(int a, int b);
int main(){
int a, b;

somme(a, b);


    return 0;
}
void somme(int a, int b){
    printf("entrer a:");
    scanf("%d", &a);
    printf("entrer b:");
    scanf("%d", &b);
    printf("%d", a + b);
}