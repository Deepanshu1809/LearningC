#include<stdio.h>
#include<conio.h>

void main() {
int i,a,j;
for(i=1;i<=9;i+=2) {
for(j=7;j>=i;j-=2) {
printf(" ");
}
for(a=1;a<=i;a++) {
printf("*");
}
printf("\n");
}
  getch();
  }
