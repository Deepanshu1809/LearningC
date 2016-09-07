#include<stdio.h>
#include<string.h>

struct One {
    int a;
    int *ptr;
    char name[10];
};

int main() {
    struct One O1;
    O1.a = 100;
    O1.ptr = &O1.a;
    strcpy(O1.name,"Deepanshu");

    printf("\n %d \n",O1.a);
    printf("\n %d \n",O1.ptr);
    printf("\n %s \n",O1.name);
    return 0;
}