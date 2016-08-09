#include<stdio.h>
#include<conio.h>


void main() {

char a;
int i,b,c,d;

do {
printf(" \n Enter the value of 1st no. \t");
scanf("%d",&b);
fflush(stdin);
printf("\n Press '+' for Addition \n Press '-' for Subtraction \n Press '*' for Multiplication \n press '/' for Division \n");
scanf("%c",&a);
printf("\n Enter the value of 2nd no. \t");
scanf("%d",&c);


switch(a)
{
case '+':
d=b+c;
printf("\n Addition of the given no's. is %d",d);
break;
case '-':
d=b-c;
printf("\n Addition of the given no's. is %d",d);
break;
case '*':
d=b*c;
printf("\n Addition of the given no's. is %d",d);
break;
case '/':
d=b/c;
printf("\n Addition of the given no's. is %d",d);
break;
default:
printf("\n INVALID SELECTION \n");
}
printf("\n Enter Your Choice \t");
printf("\n Press 1 To Continue \n \n Press Any Key To Exit \n \n \t \t");
scanf("%d",&i);



}while(i==1);

getch();
}
