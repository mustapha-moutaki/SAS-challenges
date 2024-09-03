#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, x1, x2, D;

    printf("Entrer a: \t");
    scanf("%lf", &a);

    printf("Entrer b: \t");
    scanf("%lf", &b);

    printf("Entrer c: \t");
    scanf("%lf", &c);

    D = pow(b, 2) - 4 * a * c;

    if (D > 0) {
        printf("L'equation a deux solutions:\n");
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("x1 = %lf\n", x1);
        printf("x2 = %lf\n", x2);
    } else if (D == 0) {
        printf("L'equation a une solution:\n");
        x1 = (-b) / (2 * a);
        printf("x1 = %lf\n", x1);
    } else {
        printf("L'equation n'a pas de solutions.\n");
    }

    return 0;
}
