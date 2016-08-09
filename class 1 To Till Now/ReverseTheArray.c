#include<stdio.h>
#include<conio.h>

int main() {

int a[6],k,j;

for(j=0;j<6;j++) {
scanf("%d",&a[j]);
	}

printf("Reverse Of the Array Is :- \n");
for(k=5;k>=0;k--) {

printf("%d \n",a[k]);

	}

return 0;
}