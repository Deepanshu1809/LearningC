#include<stdio.h>
#include<conio.h>
#include<math.h>

void main() {
char a,c;

printf("\n Enter No.");
scanf("%c",&a);
if(a>='0' && a<= '9')
printf("The value is number");
else if(a>= 'a' && a<='z' || a>='A' && a<= 'Z')
printf("The value is alphabet");
else
printf("The value is any other character");

getch();


}
