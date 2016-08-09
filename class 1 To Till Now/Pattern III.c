#include<stdio.h>
#include<conio.h>

void main() {
int i,j,k;
for(i=1;i<=12;i+=2)
{
 for (k=12;k>=i;k-=2){
 printf(" ");
 }
for(j=1;j<=20 && j<=i;j+=2)
{
printf("%d  ",j);
}
printf("\n");
}

getch();
}