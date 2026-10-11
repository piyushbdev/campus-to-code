//  C program to calculate the Euclidean distance between two points in a 2D plane, 
//given their coordinates (x1,y1) and (x2,y2)
#include <stdio.h>
#include <math.h>
int main(){
float x1, y1, x2, y2, d;
printf("Enter x1 and y1: ");
scanf("%f %f", &x1, &y1);
printf("Enter x2 and y2: ");
scanf("%f %f", &x2, &y2);
d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
printf("Distance = %f", d);
return 0;
}

