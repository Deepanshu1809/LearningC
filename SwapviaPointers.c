#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c=0,*p,*s,*d; 
    p=&a;
    s=&b;
    d=&c;
    printf("Enter the value of a : \n");
    scanf("%d",p);
    printf("Enter the value of b : \n");
    scanf("%d",s);

    *d=*p;
    *p=*s;
    *s=*d;
    printf("The Value of a After Swapping is : %d \n",*p);
    printf("The Value of b After Swapping is : %d \n",*s);
    return 0;
}