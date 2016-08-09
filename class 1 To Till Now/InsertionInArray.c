#include<stdio.h>
#include<conio.h>

int main() {

int i,j,a[20],b,c;

for(j=0;j<8;j++) {
scanf("%d",&a[j]);
	}

printf("Enter the Index No. of Array \n");
scanf("%d",&b);

printf("Enter the Element Value of Array \n");
scanf("%d",&c);
for(i=8;i>b;i--) {
a[i]=a[i-1];
}
a[b]=c;
for(i=0;i<9;i++) {
printf("%d \n",a[i]);
		}
return 0;
}
