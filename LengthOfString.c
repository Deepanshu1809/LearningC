#include<stdio.h>

int main() {
    int i=0;
    char c[10];
    printf("Enter The Value Of String \n");
    scanf("%s",c);
    printf("dd:%c", c[2]);
    while(c[i]!='\0'){
        i++;
    }
    printf("%d",i);

    return 0;
}
