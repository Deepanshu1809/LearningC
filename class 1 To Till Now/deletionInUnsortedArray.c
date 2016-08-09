#include<stdio.h>
#include<conio.h>

int main() {
int a[20],i,j,b,u=1;
printf("Enter The Elements Of Array \n");
for(i=0;i<6;i++){
    scanf("%d",&a[i]);
}
printf("ENter The Value You Want To Delete \n");
scanf("%d",&b);
for(j=0;j<6;j++) {
    if(b==a[j]) {
for(i=j;i<6;i++) {
    a[i]=a[i+1];
}
break;
    }

}
printf("Array After Deletion IS :- \n");
for(j=0;j<5;j++) {
    printf("%d \n",a[j]);
}
return 0;

}