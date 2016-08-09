#include<stdio.h>
#include<conio.h>

int main() {

int a[5],i,j,k,u = 1;
printf("Enter The Values In Array \n ");





for (j=0;j<5;j++) {
scanf("%d",&a[j]);
}



printf("Enter The Item To Search \n");
scanf("%d",&i);
for(k=0;k<=4;k++){
if(i==a[k]) {
u=0;
break;
}
}
if(u==0)
printf("FOUND \n");
else
printf("NOT FOUND \n");

return 0;
}
