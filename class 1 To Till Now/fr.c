#include<stdio.h>
#include<conio.h>

void main() {
int a,b,c,d,e;
char f;
printf("\n press 1 for calculator \n Press 2 for positive or Negative no. \n Press 3 for Vowel and Consonent \n ");
scanf("%d",&a);
switch(a)
{
case 1:
printf("\n Press 1 for Addition \n Press 2 for Subtraction \n Press 3 for Multiplication \n Press 4 for Division \n");
scanf("%d",&b);
printf("\n Enter First no. \t");
scanf("%d",&c);
printf("\n Enter Second no. \t");
scanf("%d",&e);
switch(b)
{
case 1:
d=c+e;
printf("\n Addition of the values is \t %d \t",d);
break;
case 2:
d=c-e;
printf("\n Subtraction  of the values is \t %d \t",d);
break;
case 3:
d=c*e;
printf("\n Multiplication of the values is \t %d \t",d);
break;
case 4:
d=c/e;
printf("\n Division of the values is \t %d \t",d);
break;
default:
printf("\n INVALID SELECTION \t");
}
break;
case 2:
printf("\n Enter Required no. \t");
scanf("%d",&c);
if(c>=0)
printf("\n The Given No. is positive \t");
else
printf("\n The Given No. is Negative \t");
break;
case 3:
fflush(stdin);
printf("\n Enter the Alphabet\t");
scanf("%c",&f);
switch(f)
{
case 'a' :
printf("The Given Alphabet is a vowel");
break;
case 'e' :
printf("The Given Alphabet is a vowel");
break;
case 'o':
printf("The Given Alphabet is a vowel");
break;
case 'i':
printf("The Given Alphabet is a vowel");
break;
case 'u':
printf("The Given Alphabet is a vowel");
break;
default:
printf("The Given Alphabet is a consonant");
}
break;
default:
printf("\n INVALID SELECTION \t");
}
getch();
}


