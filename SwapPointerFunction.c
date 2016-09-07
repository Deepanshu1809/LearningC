#include<stdio.h>
#include<conio.h>

void swap(int *p, int *s){
    int t;
    t=*p;
    *p=*s;
    *s=t;
}
int main() {
    int x,y,*p,*s;
    p = &x;
    s = &y;
    printf("Enter the value of a : \n");
    scanf("%d",p);
    printf("Enter the value of b : \n");
    scanf("%d",s);
    swap(p,s);
    printf("The Value of a After Swapping is : %d \n",*p);
    printf("The Value of b After Swapping is : %d \n",*s);
    return 0;
}