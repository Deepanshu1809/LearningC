#include<stdio.h>
#include<conio.h>

typedef struct employee {
    double sal;
    double tax;
    double NetSal;
}Employee;
int main(){
    // typedef struct employee Employee {instead of declaring in the end of struct function}
    Employee e1 , e2 , e3 , e4 ,e5;
    e1.sal = 50000;
    e1.tax = e1.sal *15 / 100 ;
    e1.NetSal = e1.sal - e1.tax;
    e2.sal = 70000;
    e2.tax = e2.sal *15 / 100 ;
    e2.NetSal = e2.sal - e2.tax;
    e3.sal = 80000;
    e3.tax = e3.sal *15 / 100 ;
    e3.NetSal = e3.sal - e3.tax;
    e4.sal = 90000;
    e4.tax = e4.sal *15 / 100 ;
    e4.NetSal = e4.sal - e4.tax;
    e5.sal = 100000;
    e5.tax = e5.sal *15 / 100 ;
    e5.NetSal = e5.sal - e5.tax;
    printf("Salary For Employee 1 : %lf \n",e1.NetSal);
    printf("Salary For Employee 2 : %lf \n",e5.NetSal);
    printf("Salary For Employee 3 : %lf \n",e3.NetSal);
    printf("Salary For Employee 4 : %lf \n",e4.NetSal);
    printf("Salary For Employee 5 : %lf \n",e5.NetSal);
    return 0;
}