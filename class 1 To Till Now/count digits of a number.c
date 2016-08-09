#include<stdio.h>
#include<conio.h>


void main() {
int a,b,n,c=0;
printf("\n Enter the no. \t");
scanf("%d",&a);
while(a > 0){
a = a / 10;
c++;
}

printf("Number of digits: %d", c);

getch();
}