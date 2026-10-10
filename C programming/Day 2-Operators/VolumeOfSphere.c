#include <stdio.h>

int main() {
    int r;
    float v;

    printf("Enter Radius: ");
    scanf("%d", &r);

    v = 4 * 3.1415 * r * r * r / 3;
    printf("The Volume is : %.2f", v);
    return 0;
}
