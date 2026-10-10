#include <stdio.h>

int main() {
    double n, cube;

    printf("Enter a number: ");
    scanf("%lf", &n);

    cube = n * n * n;

    printf("The cube of %.2lf is %.2lf\n", n, cube);

    return 0;
}
