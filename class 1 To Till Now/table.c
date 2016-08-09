#include<stdio.h>
#include<conio.h>


void main() {
int i,j,k=1,l;
printf("\n Enter the no. \t");
scanf("%d",&i);
printf("\n Table till \n");
scanf("%d",&j);
while(k<=j) {
l=i*k;
printf("%d * %d = %d \n",i,k,l );
k++;
}
getch();
}