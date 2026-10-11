// program for converting distance in mm to cm, inch, feet 
#include <stdio.h>
int main(){
float mm, cm, inches, feet;
printf("Enter distance in millimeters:");
scanf("%f", &mm);
cm = mm/10;
inches = cm/2.54;
feet = inches/12;
printf("Centimeters = %f", cm);
printf("\nInches = %f", inches);
printf("\nFeet = %f", feet);
return 0;
}