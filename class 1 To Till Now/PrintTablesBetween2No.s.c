#include<stdio.h>
#include<conio.h>

void main() {

int a,b,i,j,l=1;
printf("Enter the value between tables \t");
scanf("%d",&a);
printf("\n ");
scanf("%d",&b);
for(i=1;i<=10;i++) {

for(j=a;j<=b;j++) {
printf("%d\t",j*i);

}
printf("\n");

}

getch();
}
