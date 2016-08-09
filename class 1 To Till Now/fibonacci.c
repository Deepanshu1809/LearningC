#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
int n,g,c=0,a=0,b=1;
printf("\n Enter the No. Of Terms Till You Want To Run \t");
scanf("%d",&n);
while(c<n){
if(c<=1)
g=c;
else
g=a+b;
a=b;
b=g;
printf("\n %d",g);
c++;
}
getch();
}