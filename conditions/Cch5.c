#include<stdio.h>
int main(){
float c;

printf("entrer la temperature en c: \t");
scanf("%f", &c);

if (c < 0)
{
    printf("l'etat de l'eau a cette temperature est: \"solide\"");
}
else if(0 <= c && c < 100)
    printf("l'etat de l'eau a cette temperature est: \"liquide\"");

else if(c >= 100)
        printf("l'etat de l'eau a cette temperature est: \"gaz\"");
else
    printf("Réessayez");


    return 0;
}