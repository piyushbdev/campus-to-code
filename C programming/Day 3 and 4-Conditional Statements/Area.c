// this program takes three sides of a triangle as input and checks whether they
// form a valid triangle using the herons formula
#include <stdio.h>
#include <math.h>
int main(){
float a, b, c;
printf("Enter three sides of the triangle: ");
scanf("%f %f %f",&a, &b, &c);
if((a+b > c)&&(b+c>a)&&(a+c>b)){
float s = (a+b+c) / 2.0;
float area = sqrt(s*(s-a)*(s-b)*(s-c));
printf("The triangle is valid\n");
printf("Area of triangle = %.2f", area);
}else {
printf("The given sides do not form a valid triangle");
}
return 0;
}