#include<stdio.h>
int main()
{
    int *p,*q,a,b,temp=0;
    p=&a;
    q=&b;
    scanf("%d",p);
    scanf("%d",q);
    temp=p;
    p=q;
    q=temp;
    printf("%d \n",*p);
    printf("%d \n",*q);
    return 0;

}