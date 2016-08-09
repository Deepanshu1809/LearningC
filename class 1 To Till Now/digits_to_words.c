#include<stdio.h>
#include<conio.h>


void main() {
int a,n,c=0,k,rev=0;
printf("\n Enter the no. \t");
scanf("%d",&a);
while(a>0){
k= a %10;
rev=rev*10+k;
a=a/10;
}
while(rev > 0){
n=rev%10;
rev=rev/10;
switch(n){
case 1:
printf("\t ONE");
break;
case 2:
printf("\t TWO");
break;
case 3:
printf("\t THREE");
break;
case 4:
printf("\t FOUR");
break;
case 5:
printf("\t FIVE");
break;
case 6:
printf("\t SIX");
break;
case 7:
printf("\t SEVEN");
break;
case 8:
printf("\t EIGHT");
break;
case 9:
printf("\t NINE");
break;
case 0:
printf("\t ZERO");
break;
default:
printf("");
}
c++;
}

printf("\n Number of digits: %d", c);

getch();
}