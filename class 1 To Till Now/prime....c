#include<stdio.h>
#include<conio.h>

void main() {
int n,i=2,j,f, check = 0;
printf("\n Enter the No. \t");
scanf("%d",&n);
while(i<=n) {
j = 2;
while(j < i) {
    if(i%j == 0) {
    check = 0;
    break;
    } else {
    check = 1;
    }
j++;
}
if(check == 1)
	printf("Number: %d\n", i);




/*
f=0;
while(j<=i/2){
if(i%j==0)
f=1;
j++;
}
if(f==0)
printf("\n %d",i);
i++;
*/
i++;

}
getch();
}