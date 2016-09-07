#include<stdio.h>
#include<conio.h>
                        //NRNA
void add() {
    int a,b;
    scanf("%d",&a);
    b = a+5;
    printf("%d",b);
}

                       //NRWA
 void addi(int a ){
     int b;
     b = a+10;
     printf("%d",b);
 }

                        //WRNA
  int addition(){
      int a , b;
      scanf("%d",&a);
      b = a+5;
      printf("%d",b);
      return 0;
  }

                        //WRWA
  int addit(int a){
      int b;
      b = a+10;
      printf("%d",b);
      return 0;
  }
  int main(){
      printf("\t NRNA \n");
      add();
      printf("\n \t NRWA \n");
      addi(10);
      printf(" \n \t WRNA \n");
      addition();
      printf(" \n \t WRWA \n");
      addit(20);
      return 0;
  }