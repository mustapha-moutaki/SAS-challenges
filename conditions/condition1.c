#include<stdio.h>
int main(){
int num, result;


printf("entrer la nombre:\n");
scanf("%d", &num);

result = num % 2;
switch (result == 0)
{
case 1: printf("pair");
    break;

default: printf("impair");
    break;
}

    return 0;
}