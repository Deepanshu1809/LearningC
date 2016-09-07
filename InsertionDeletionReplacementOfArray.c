#include<stdio.h>
#include<conio.h>

int main() {
    int a[10],b,i,j;
    int d,u=1,m,l;
    char c;
    do{
    printf("Enter The Elements  Of Array \n");
    for(i=0;i<5;i++) {
    scanf("%d",&a[i]);
    }
    printf("Press 1 For Insertion Of Element In Array \n Press 2 For Deletion Of Element In Array \n press 3 Replacement Of Element In Array \n");
    scanf("%d",&d);
    switch(d)
    {
        case 1:
        printf("Enter the Index No. of Array \n");
        scanf("%d",&b);

        printf("Enter the Element Value of Array \n");
        scanf("%d",&m);
        for(i=8;i>b;i--) {
        a[i]=a[i-1];
      }
        a[b]=m;
        for(i=0;i<9;i++) {
        printf("%d \n",a[i]);
		}
        break;
        case 2:
        printf("ENter The Value You Want To Delete \n");
        scanf("%d",&b);
        for(j=0;j<6;j++) {
        if(b==a[j]) {
        for(i=j;i<6;i++) {
        a[i]=a[i+1];
        }
        break;
    }

}
        printf("Array After Deletion IS :- \n");
        for(j=0;j<5;j++) {
        printf("%d \n",a[j]);
}
break;
         case 3:
         printf("Enter The Element You Want To Replace \n");
        scanf("%d",&b);
        for(i=0;i<6;i++) {
        if(a[i]== b) {
         m=i;
         u=0;
         break;
     }
 }
        if(u==1){       
        printf("Please Enter The Valid Value \n ");
        } else {
        printf("Enter The Value You Want To Place \n ");
        scanf("%d",&l);
        a[m]=l;
        printf("Array After Replacement \n");
        for(j=0;j<6;j++) {
        printf("%d \n",a[j]);
}
}
break;
        default :
        printf("INVALID SELECTION \n");
    }
    fflush(stdin);
    printf("Enter Your Choice \n" );
    printf("Press 1 To Continue \n Press Any Key To Exit \n " );
    scanf("%c",&c);
    }while(c==1);
    return 0;
}