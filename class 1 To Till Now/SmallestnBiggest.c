#include<stdio.h>
#include<conio.h>

int main() {

int a[]={4,8,45,81,5,41,46,78},big,i,sml;
sml=a[0];
big=a[0];
for(i=0;i<8;i++) {
if(a[i]>big)
big=a[i];
if(a[i]<sml)
sml=a[i];

}
printf("%d \n",big);
printf("%d \n",sml);
return 0;
}
