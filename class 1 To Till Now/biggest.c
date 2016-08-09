#include<stdio.h>
#include<conio.h>


void main() {
int a=1,b, big;
while(a<=4) {
printf("\n Enter the  no. \t");
scanf("%d",&b);
if(a==1)
big=b;
if(b > big)
	big = b;
a++;
}

printf("\n %d",big);
getch();
}