#include<stdio.h>
int main(){


char n;

printf("enter a litter: \n");
scanf(" %c", &n);

switch (n)
{
case 'a':
    printf("a est un voyelle");

    break;
    case 'o':
    printf("o est un voyelle");
    break;
    case 'i':
    printf("i est un voyelle");
    break;
    case 'u':
    printf("u est un voyelle");
    break;
    case 'e':
    printf("e est un voyelle");
    break;
default:
    printf("%c n'est pas une voyelle", n);
    break;
}
    return 0;
}