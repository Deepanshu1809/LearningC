#include<stdio.h>
#include<conio.h>

void main() {
int i,j,k;
printf(" *\n");
for(i=3;i>=1;i--)
{
for(k=2;k>=i;k--) {
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}

getch();
}
