#include <stdio.h>
int main(){
int score;
printf("Enter quiz score (0-10): ");
scanf("%d", &score);
if(score < 0 || score>10){
printf("Invalid score");
}
else{
char grade;
if(score >= 9 && score <= 10){
grade = 'A';
}else if(score >= 7 && score <= 8){
grade = 'B';
}else if(score>= 5 && score <=6){
grade = 'C';
}else if(score >= 3 && score <= 4){
grade = 'D';
}else {
grade = 'F';
}
printf("Grade = %c", grade);
}
return 0;
}