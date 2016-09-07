#include<stdio.h>
#include<string.h>

struct Students {
    int Sno;
    char name[10];
    char address[10];
    double id;
    double Contact;
    char College[10];
    
};

int main() {
    struct Students Candidates[5];
    int i;
    for(i = 1 ; i < 3 ; i++){
        printf("Enter The Details For %d Candidate \n", i);
        printf("Enter The S.no \n");
        scanf("%d" , &Candidates[i-1].Sno);
        printf("Enter The Name of The Candidate \n");
        scanf("%s" , Candidates[i-1].name);
        printf("Enter The Address Of The Candidate \n ");
        scanf("%s" , Candidates[i-1].address);
        printf("Enter The ID Of The Candidate \n");
        scanf("%lf" , &Candidates[i-1].id);
        printf("Enter The Contact No. Of The Candidate \n");
        scanf("%lf" , &Candidates[i-1].Contact);
        printf("Enter The College Name Of The Candidate \n");
        scanf("%s" , Candidates[i-1].College);
        printf("\n \n ");
    }
       printf("Required Details For  Candidates \n");
       for(i = 1 ; i < 3 ; i++){
       
        printf("%d \t %s \t %s \t %lf \t %lf \t %s \n \n" , Candidates[i-1].Sno, Candidates[i-1].name , Candidates[i-1].address, Candidates[i-1].id, Candidates[i-1].Contact, Candidates[i-1].College);

    }

    return 0;
}