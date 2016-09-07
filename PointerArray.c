#include<stdio.h>

int main(){
    int a[5],*p,i;
    p = a;
    printf("%d", sizeof(int));
    for(i=0;i<5;i++){
    //scanf("%d",&a[i]);
    scanf("%d", p);
    
    p++;
    }
    printf("bybehbebue \n");
    p--;
    for(i=0;i<5;i++){
    printf("%d",*p);
    p--;
    }
    return 0;
}