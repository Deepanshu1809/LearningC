#include<stdio.h>
#include<conio.h>

int main() {

    int a[3][3], i, j;

    printf("Enter The Elements: ");

    for(i = 0; i < 3; i++) {

        for(j = 0; j < 3; j++) {

            scanf("%d", &a[i][j]);

        }

    }


    printf("Displaying The Arary");

    for(i = 0; i < 3; i++) {

        for(j = 0; j < 3; j++) {

            printf("%d\n", a[i][j]);

        }

    }
    

    return 0;
}