#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, discrimnant, root1,root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discrimnant = b * b - 4 * a * c;

    //condition for real and different roots
    if (discrimnant > 0){
        root1 = (-b + sqrt(discrimnant)) / (2 * a);
        root2 = (-b - sqrt(discrimnant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    //condition for real and equal roots
    else if(discrimnant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }

    //if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discrimnant) / (2 * a);
        printf("root1 = %.2lf+.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
