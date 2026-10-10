#include <stdio.h>

int main() {
    float a, b, area;
    printf("Enter the length of side a: ");
    scanf("%f", &a);
    
    printf("Enter the length of side b: ");
    scanf("%f", &b);

    area = a * b;

    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}
