#include<stdio.h>
int main(){

    int num1, num2, somme;

    printf("entrer la premier nombre:\t");
    scanf("%d", &num1);

    printf("entrer la premier nombre:\t");
    scanf("%d", &num2);
    somme = num1+num2;
    
    if(num1 != num2){
        printf("la sommme %d", somme);
    }
    else
    printf("les deux nombre sont indentique donc: %d", (num1+num2)*3);
    return 0;
}
