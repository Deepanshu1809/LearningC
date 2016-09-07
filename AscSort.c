#include<stdio.h>
#include<conio.h>

int main() {

int a[]={4,8,45,81,5,41,46,78},j,i,b;

for(i=0;i<8;i++) {
      for(j=i+1;j<8;j++) {

              if(a[i]>a[j]) {
			
		b=a[i];    		

		a[i]=a[j];
		a[j]=b;
		
 		            }


			 }


}
for(i=0;i<8;i++) {
printf("%d \n",a[i]);
}








return 0;
}
