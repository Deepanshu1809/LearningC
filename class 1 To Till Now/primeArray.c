#include<stdio.h>
#include<conio.h>

int main() {
    int a[10],i,j, f = 0;
    printf("Enter The Elements Of Array \n");
    for(i=0;i<5;i++) {
        scanf("%d",&a[i]);
     }
     printf("No. Of Prime No.s In Array \n");
     for(i=0;i<5;i++){
         for(j=2;j<=a[i]/2;j++) {
             if(a[i] % j == 0) {
                 f = 1;
                 break;
             }
         }
        if(f == 0) {
            printf("Prime: %d\n", a[i]);
        } else {
            printf("Composite: s%d\n", a[i]);
        }
        f = 0;

     }
     return 0;
}