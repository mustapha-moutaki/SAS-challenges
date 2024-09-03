#include<stdio.h>
int main(){

   int num1, num2, num3, r1, r2, r3;
   int somme_de_r, somme_de_n;
   int resultat;
  

   printf("entrer le nombre 1: \t");
   scanf("%d", &num1);
//ponderation 2
   printf("entrer le nombre 2: \t");
   scanf("%d", &num2);
// ponderation 3
   printf("entrer le nombre 3: \t");
   scanf("%d", &num3);
//ponderation 3

r1 = num1 * 2;
r2 = num2 * 3;
r3 = num3 * 5;

somme_de_r = r1 + r2 + r3;


resultat = somme_de_r / 10;

printf("la moyenne ponderee est: %d", resultat);

    return 0;
}
