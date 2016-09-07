#include<stdio.h>
#include<conio.h>
#define SIZE 2


int main() {
    int a[SIZE][SIZE],b[SIZE][SIZE],c[SIZE][SIZE],i,j,k,sum=0;
    printf("Enter The Elements of First Matrix \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter The Elements of Second Matrix \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }
     printf("\n \n \n \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
           for(k=0;k<2;k++){
             sum=sum + a[i][k] * b[k][j]; 
           }
           c[i][j] = sum;
           sum=0;
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
          printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}