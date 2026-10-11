//this program is to check whether the given character is a vowel, consonant, or digit.

#include <stdio.h>
int main(){
char ch;
printf("Enter a character: ");
scanf("%c", &ch);
if(ch >= '0' && ch <= '9'){
printf("%c is a digit", ch);
}
else if((ch >= 'a' && ch<= 'z')||(ch >= 'A' && ch<='Z')){
if(ch == 'a'|| ch == 'e' || ch == 'i' || ch == 'o' ||
ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I'|| ch == 'O' || ch ==
'U'){
printf("%c is a vowel", ch);
}
else printf("%c is a consonant", ch);
}
else{
printf("%c is a unknown character",ch);
}
return 0;
}