#include<stdio.h>
#include<conio.h>

void main() {
int i,j;
char a='A';
for(i=1;i<=5;i++)
{
	for(j=1; j<=i;j++)
	{
	if( i % 2 == 0) {
		printf("%d",j);
		} else {
			printf("%c", a);
			a++;
   		}
}
printf("\n");
}

getch();
}