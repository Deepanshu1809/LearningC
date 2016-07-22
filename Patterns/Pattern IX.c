#include<stdio.h>
#include<conio.h>

void main() {
int i,j,n=10,k=1,h =0 ;
for(j=1;j<=n;j++) {
for(i=1;i<=j;i++) {
h=h+i;
printf("%d",i);
if(i != j)
	printf("+");
}

printf(" = %d",h);
h=0;
printf("\n");
}
getch();
}

