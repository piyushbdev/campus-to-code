//convert the temperature given in Fahrenheit to Centigrade and Centigrade to Fahrenheit.
#include <stdio.h>
int main(){
float c, f;
printf("Enter temperature in Fahrenheit: ");
scanf("%f", &f);
c = (f-32)*(5.0/9.0);
f = c*(9.0/5.0) + 32;
printf("Temperature in Celsius = %f", c);
printf("\nTemperature in Fahrenheit = %f", f);
return 0;
}