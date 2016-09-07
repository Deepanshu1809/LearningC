#include<stdio.h>
#include<conio.h>
#define SIZE 3


int main() {
    int a[SIZE][SIZE],b[SIZE][SIZE],c[SIZE][SIZE],i,j;
    printf("Enter The Elements of First Matrix \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter The Elements of Second Matrix \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n \n \n \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j] = a[i][j] - b[i][j] ;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
          printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}