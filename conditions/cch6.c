#include<stdio.h>
int main(){
int a, b;
int somme, division, sub, mult;


printf("entrer la valeur de nombre a: \t");
scanf("%d", &a);
printf("entrer la valeur de nombre b: \t");
scanf("%d", &b);

somme = a + b;
sub = a -b;
mult = a * b;
division = a / b;

printf(" %d + %d= %d\n", a, b, somme);
printf(" %d - %d= %d\n", a, b, sub);
printf(" %d * %d= %d\n", a, b, mult);
if (a == 0 || b == 0)
{
    printf("la division par 0 est impossible");
}
else

    printf(" %d / %d= %d\n", a, b, division);

    return 0;
}