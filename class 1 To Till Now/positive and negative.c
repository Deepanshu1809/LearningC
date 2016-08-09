#include<stdio.h>
#include<conio.h>

void main()
{
int a;
printf("\n Enter the no. \t");
scanf("%d",&a);
if(a==0)
printf("The given no. is zero ");
else if(a>0)
printf("The given no. is positive");
else
printf("The given no. is negative");
getch();
}