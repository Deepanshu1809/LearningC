#include<stdio.h>
#include<conio.h>

void main()
{
char x;
printf("\n Enter the no. \t");
scanf("%c",&x);
if(x=='a' || x=='e' || x== 'i' || x== 'o' || x== 'u')
printf("The given alphabet is vowel");
else
printf("The given alphabet is consonant");
getch();
}