#include <stdio.h>
#include <math.h> 

int main() {
    double a, b, c, moyenneGeometrique;

    printf("Entrez le premier nombre : ");
    scanf("%lf", &a);

    printf("Entrez le deuxieme nombre : ");
    scanf("%lf", &b);

    printf("Entrez le troisieme nombre : ");
    scanf("%lf", &c);

    moyenneGeometrique = cbrt(a * b * c);


    printf("La moyenne geometrique des trois nombres est : %lf\n", moyenneGeometrique);

    return 0;
}
