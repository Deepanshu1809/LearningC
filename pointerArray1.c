#include<stdio.h>
#include<conio.h>

void incr(int *p, int size) {
    	int i;
        for(i = 0; i < size; i++) {
            (*p)++;   //increase the value at address
            p++;   //move to next address
        }
}

int main() {
    int a[] = {19, 21, 32, 34, 67};
    int *p, i;

    incr(a, 5);
    /*
    for(i = 0; i < size; i++) {
            printf("%d\n", *p);
            p++;   //move to next address
        }
   */
   for(i = 0; i < 5; i++) {
        printf("%d \n", a[i]); 
   }
    return 0;
}