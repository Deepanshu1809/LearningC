#include<stdio.h>
#include<conio.h>

int main() {
int a[10],i,j,u=1,k,l,m;
printf("Enter The Elements Of Array \n");
for(i=0;i<6;i++) {
    scanf("%d",&a[i]);
}
printf("Enter The Element You Want To Replace \n");
scanf("%d",&k);
 for(i=0;i<6;i++) {
     if(a[i]== k) {
         m=i;
         u=0;
         break;
     }
 }
if(u==1){
printf("Please Enter The Valid Value");
} else {
printf("Enter The Value You Want To Place \n ");
scanf("%d",&l);
a[m]=l;
}
printf("Array After Replacement \n");
for(j=0;j<6;j++) {
    printf("%d \n",a[j]);
}

    return 0;
}