#include<stdio.h>
#include<conio.h>

int main(){
    int a,*p; //*p = a = Value declared     
    p = &a;
    scanf("%d",p);
    printf("Address Of a : %d \n",*(&p));
    printf("Address Of p : %d \n",&p);
    printf("Value Of p   : %d \n",*p);
    printf("Value Of a   : %d \n",a);
    printf("Address Of a : %d \n",&a);
    printf("Value Of p   : %d \n",p);   
    return 0; 
}