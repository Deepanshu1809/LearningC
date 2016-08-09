#include<stdio.h>
#include<conio.h>

void main() {

int a,b,c,d;
printf("\n Press 1 for Biggest of three no's. \n Press 2 for Smallest of three no's. \n Press 3 for Even or Odd no. \n Press 4 for positive or negative no. \n");
printf("\n Enter your choice\n");
scanf("%d",&d);
switch(d)
{
case 1:
printf("\n Enter First No.");
scanf("%d",&a);
printf("\n Enter Second No.");
scanf("%d",&b);
printf("\n Enter Third No.");
scanf("%d",&c);
if(a>b && a>c)
printf("\n First no. is the greatest no. \n");
else if(b>a && b>c)
printf("\n Second no. is the greatest no. \n");
else if(c>a && c>b)
printf("\n Third no. is greatest no. \n");
break;
case 2:
printf("\n Enter First No.");
scanf("%d",&a);
printf("\n Enter Second No.");
scanf("%d",&b);
printf("\n Enter Third No.");
scanf("%d",&c);
if(a<b && a<c)
printf("\n First no. is the smallest no. \n");
else if(b<a && b<c)
printf("\n Second no. is the smallest no. \n");
else if(c<a && c<b)
printf("\n Third no. is smallest no. \n");
break;
case 3:
printf("\n Enter The Required No. \t");
scanf("%d",&a);
if(a%2==0)
printf("\n The Given No. is Even No. \n");
else
printf("\n The Given No. is Odd No. \n");
break;
case 4:
printf("\n Enter The Required No. \t");
scanf("%d",&a);
if(a==0)
printf("\n The Given No. is Neither positive Nor Negative \n");
else if(a>0)
printf("\n The Given No. is  Positive No. \n");
else if(a<0)
printf("\n The Given No. is Negative No. \n");
break;
default:
printf(" \n INVALID SELECTION \n ");
}

getch();
}

