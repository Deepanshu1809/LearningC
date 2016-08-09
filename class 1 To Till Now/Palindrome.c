#include<stdio.h>
#include<conio.h>

void main(){
int a, n,b,rev=0;
printf("\n Enter the No.");
scanf("%d",&a);
b=a;
while(a>0){
n=a%10;
rev=rev*10+n;
a=a/10;
}
if(rev == b)
	printf("\n The Given No. Is Palindrome");
else
	printf("\n The Given No. Is Not a Palindrome");
getch();
}
