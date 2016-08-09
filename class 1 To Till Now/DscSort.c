#include<stdio.h>
#include<conio.h>

int main() {

int i,j,b,a[5];
printf("Enter The Terms \n");
for(i=0;i<5;i++) {
scanf("%d \n",&a[i]);
}

for(i=0;i<5;i++) {

	for(j=i+1;j<5;j++) {
		
		if(a[i]<a[j]) {
			
			b=a[i];
			a[i]=a[j];
			a[j]=b;
				}
			}
		}
printf("The No. Of Terms After Sorting \n");
for(i=0;i<5;i++) {
 printf("%d \n",a[i]);
		}
return 0;
}