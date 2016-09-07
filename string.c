#include<stdio.h>
#include<conio.h>


int main() {

    //char a[] = {'d', 'e', 'e', 'p', 'a', 'n', 's', 'h', 'u'};
    int i,j;
    char a[50],c;
    scanf("%s",a);

    for(i=0;i<6;i++) {
        for(j=i+1;j<6;j++) {
            if(a[i]>a[j]) {
                c=a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }

    printf("%s", a);
    return 0;
}