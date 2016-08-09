#include<stdio.h>
#include<conio.h>

int main() {
    int a[10],i,j,z=0,y=0,b[10],c[10],f=0;
    printf("Enter The Elements Of Array \n");
    for(i=0;i<5;i++) {
        scanf("%d",&a[i]);
     }
     
     for(i=0;i<5;i++){
         for(j=2;j<=a[i]/2;j++) {
             if(a[i] % j == 0){
                 f = 1;
                 break;
             }
    }
             if(f==0){
            c[y]=a[i];
                 y++;     
             }else {
                   b[z]=a[i];
                 z++;
             }
         f=0;
     }
     printf("No. Of Prime No.s In Array \n");
     for(i=0;i<y;i++) {
     printf("%d \n",c[i]);
     }
      printf("No. Of Composite No.s In Array \n");
      for(i=0;i<z;i++) {
      printf("%d \n",b[i]);
      }
     return 0;
}