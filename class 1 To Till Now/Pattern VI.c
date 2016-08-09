#include<stdio.h>
#include<conio.h>

void main() {
int i,j,k=1;
char a='A';
for(i=1;i<=5;i++)
{
	for(j=1; j<=i;j++)
	{
	if( i % 2 == 0) {
   printf("%c", a);
			a++;
		}
      else {
       printf("%d",k);
       k++;
   		}
 }        
 a='A';
printf("\n");
}

getch();
}