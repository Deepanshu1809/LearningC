#include<stdio.h>
#include<conio.h>

void main() {
int i,j,k,l=1;
for(i=1;i<=4;i++)
{
 for (k=3;k>=i;k--){
 printf(" ");
 }
for(j=1; j<=i;j++)
{
printf("%d  ",l);
l+=2;
}
printf("\n");
}

getch();
}