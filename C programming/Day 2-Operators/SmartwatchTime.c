// The program should display the time in hours, minutes, and seconds:
# include <stdio.h>
int main(){
int hours, minutes, seconds, time;
printf("Enter the time in Seconds: ");
scanf("%d", &time);
hours = time/3600;
minutes = (time%3600)/60;
seconds = time%60;
printf("Time = %d Hours %d Minutes %d Seconds", hours, minutes,
seconds);
return 0;
}