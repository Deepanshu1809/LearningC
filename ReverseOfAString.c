#include<stdio.h>
#include<string.h>
#define S 10 
int main() {
    int i,j=0;
    char a[S],b[S];
    printf("Enter The Value Of The String \n");
    scanf("%s",a);
    i=strlen(a)-1;

    while(i >= 0) {
        b[j]=a[i];
        j++;
        i--;
    }
    printf("%s",b);
    return 0;
}