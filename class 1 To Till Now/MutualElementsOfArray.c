#include<stdio.h>
#include<conio.h>



int main() {
int a[10], b[10], c[10], i, j, q = 0;
printf("Enter The Elements Of First Array \n");


for(i=0;i<6;i++){
    scanf("%d",&a[i]);
}


printf("Enter The Elements Of Second Array \n");

for(i=0;i<6;i++){
    scanf("%d",&b[i]);
}


for(j = 0;j < 6; j++) {

    for(i = 0; i < 6; i++) {

        if(a[j] == b[i]) {

            c[q] = a[j];
            q++;
            break;

        } 

    }    
}

printf("new Array Formed");
for(i = 0; i < 6; i++) {
    printf("%d\n", c[i]);

}

    return 0;
}