#include<stdio.h>
#include<conio.h>

int rev(int e) {
    int rev=0, c;
    while(e>0) {
        c=e%10;
        rev = rev*10+c;
        e = e/10;
    }
    return rev;
}

int main(){
    int d,a;
    printf("Enter The No. \n");
    scanf("%d",&a);
    d = rev(a);
    printf("REVERSE OF THE NO. : %d",d);
    return 0;
}