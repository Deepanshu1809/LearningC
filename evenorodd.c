#include<stdio.h>
#include<conio.h>

void main()
{
int a;
printf("\n Enter the no. \t");
scanf("%d",&a);
if(a==0)
printf("The given no. is neither odd nor even ");
else if(a%2==0)
printf("The given no. is even");
else
printf("The given no. is odd");
getch();
}
