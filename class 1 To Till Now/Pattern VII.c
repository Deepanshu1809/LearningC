#include<stdio.h>
#include<conio.h>


void main() {
int i,j,a;
 for (i=5;i>=1;i--) {
 for(a=4;a>=i;a--){
 printf(" ");
 }
  for(j=1;j<=i;j++) {
  printf("*");
      }
printf("\n");
}
getch();
}