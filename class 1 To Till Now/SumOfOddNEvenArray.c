#include<stdio.h>
#include<conio.h>

int main() {

int a[6],k,j,odsum=0,evsum=0;

for(j=0;j<6;j++) {
scanf("%d",&a[j]);
	}

for(k=0;k<6;k++) {
 if(a[k]%2==0) {
evsum=evsum + a[k];
}
	}

for(k=0;k<6;k++) {
 if(a[k]%2!=0) {
odsum=odsum + a[k];
}
	}	
printf("Sum Odd Terms Is %d \n",odsum);
printf("Sum Even Terms Is %d \n",evsum);


return 0;
}