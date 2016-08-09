#include<stdio.h>
#include<conio.h>

void main() {
int i, j,a, k, f;
for(i = 5; i >= 1 ; i--) {
for(a=1;a<=i;a++) {
printf(" ");
}

for(j = 5; j >= i; j--) {
printf("%d", j);
}

f = i + 1;
for(k = 5; k > i; k--) {
printf("%d", f);
f++;
}

printf("\n");

}
for(i =2; i <= 5 ; i++) {
for(a=1;a<=i;a++) {
printf(" ");
}

for(j = 5; j >= i; j--) {
printf("%d", j);
}

f = i + 1;
for(k = 5; k > i; k--) {
printf("%d", f);
f++;
}

printf("\n");

}




getch();
}