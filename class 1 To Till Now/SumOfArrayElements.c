#include<stdio.h>
#include<conio.h>

int main() {

int a[6],j,i,sum=0;

for(j=0;j<6;j++) {
scanf("%d",&a[j]);
	}

for(i=0;i<6;i++) {
sum=sum+a[i];
	}

printf("Sum Of The Elements in Array is %d",sum);

return 0;
}
