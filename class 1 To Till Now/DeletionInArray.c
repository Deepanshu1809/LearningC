#include<stdio.h>
#include<conio.h>

int main() {

int a[20],i,j,b;
printf("Enter The Elements Of Array \n");
for(i=0;i<6;i++) {
scanf("%d",&a[i]);
		}

printf("Enter The Index No. You Want To Delete \n");
scanf("%d",&b);

for(j=b;j<5;j++) {

a[j]=a[j+1];
	}
printf("\n Array After Deletion \n");
for(j=0;j<5;j++) {

printf("%d \n",a[j]);
	}

return 0;
}
