#include<stdio.h>
#include<string.h>

int main() {
    int i = 0,j;
    char a[10],b[10];

    printf("Enter The First String \n");
    scanf("%s",a);
    printf("Enter The Second String \n");
    scanf("%s",b);

     if(strlen(a)==strlen(b)) {
               for(j=0;j<strlen(a);j++) {
                if(a[j]!=b[j]) {
                    i = 0;
                    break;
                } else if(a[j]==b[j] || a[j]+32==b[j] || a[j]==b[j]+32 ) {
                    i = 1;
                }
            }
        }
        if(i==1) {
            printf("Both The Strings Are Equal \n");
        } else  {
            printf("Strings Are Not Equal \n");
        }
        return 0;
}
