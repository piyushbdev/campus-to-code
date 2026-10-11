#include <stdio.h>
int main(){
float num1, num2, sum, product, division, difference;
char operator;
printf("Enter first number: ");
scanf("%f",&num1);
printf("Enter operator (+, -, *, /): ");
scanf(" %c",&operator);
printf("Enter second number: ");
scanf("%f", &num2);
switch(operator){
case '+':
sum = num1 + num2;
printf("Result = %.2f",sum);
break;
case '*':
product = num1 * num2;
printf("Result = %.2f",product);
break;
case '-':
difference = num1 - num2;
printf("Result = %.2f", difference);
break;
case '/':
if(num2 == 0){
printf("Division by zero is not possible");
}
else{
division = num1/num2;
printf("Result = %.2f",division);
}
break;
default: printf("Invalid operator");
break;
}
return 0; }