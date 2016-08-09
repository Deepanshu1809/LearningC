#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
int a ,c,d,n,b,k=0;
printf("\n Enter the No.");
scanf("%d",&a);
b=a;
d=a;
while(a>0){
a=a/10;
c++;
}
while(d>0) {
n=d%10;
k=k+pow(n,c);
d=d/10;
}
printf("\n %d",k);
printf("\n %d",c);
if(k == b)
	printf("\n The Given No. Is Armstrong");
else
	printf("\n The Given No. Is Not a Armstrong");
getch();
}