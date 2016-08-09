#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
int a ,n=1;
printf("\n Enter the No.");
scanf("%d",&a);
while(a>0) {
n=n*a;
a--;
}
printf("\n %d",n);
getch();
}