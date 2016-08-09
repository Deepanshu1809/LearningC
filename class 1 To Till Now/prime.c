#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
int n,i=2;
char a;
printf("\n Enter the No. \t");
scanf("%d",&n);
while(i<=n/2){
if(n%i==0)
a=0;
else
a=1;
i++;
}

if(a==0)
printf("\n The Given No. Is  Not a Prime Number.");
else if(a==1)
printf("\n The Given No. Is a Prime Number.");
getch();
}