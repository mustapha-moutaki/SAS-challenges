#include <stdio.h>
#include <math.h> 

int main() {
    double a, b, c, moyGEO;

    printf("Entrez le premier nombre : ");
    scanf("%lf", &a);

    printf("Entrez le deuxieme nombre : ");
    scanf("%lf", &b);

    printf("Entrez le troisieme nombre : ");
    scanf("%lf", &c);

    moyGEO = cbrt(a * b * c);
    //cbrt example: 2*2*2


    printf("La moyenne geometrique des trois nombres est : %lf\n", moyGEO);

    return 0;
}
