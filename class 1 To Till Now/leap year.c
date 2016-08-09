#include<stdio.h>
#include<conio.h>

void main()
{
int y;
printf("\n Enter the year \t");
scanf("%d",&y);
if(y%4==0)
printf("The year %d is a leap year",y);
else
printf("The year %d is not a leap year",y);
getch();
}