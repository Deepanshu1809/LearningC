#include<stdio.h>
#include<conio.h>

    
    int main(){
        int a,b;
        int *p,*s;
        p = &a;
        s = &b;
        scanf("%d",p);
        scanf("%d",s);
        printf("SUM = %d",(*p + *s));
        return 0;
    }