#include<stdio.h>
#include<conio.h>

void main()
{
int x;
printf("\n Enter the age \t");
scanf("%d",&x);
if(x>=18)
printf("The candidate is eligible");
else
printf("The candidate is not eligible");
getch();
}