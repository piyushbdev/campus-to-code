//The program is to take two numbers as input and find whether one number is a multiple of the other or not.
#include <stdio.h>
int main(){
int num1, num2;
printf("Enter two numbers:\n");
scanf("%d %d", &num1, &num2);
if(num2 == 0){
printf("Division by zero is not possible\n");
}
else if(num1 % num2 == 0){
printf("%d is a multiple of %d\n", num1, num2);
}
else if((num1 != 0) && (num2 % num1 == 0)){
printf("%d is a multiple of %d\n", num2, num1);
}
else {
printf("Neither number is a multiple of the other");
}
return 0;
}