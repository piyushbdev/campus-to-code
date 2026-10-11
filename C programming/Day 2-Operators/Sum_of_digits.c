//The program should display the sum of the four digits in the 4 digit number
#include <stdio.h>
int main(){
int sum, a, b, c, d;
printf("Enter four digit number ");
scanf("%1d%1d%1d%1d",&a,&b,&c,&d);
sum = a + b + c + d;
printf("Sum of Digits = %d", sum);
return 0;
}