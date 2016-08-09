#include<stdio.h>
#include<conio.h>

void main()
{
int BS,DA,HRA,CA,GS,PF,NS;
printf(" \n Enter your Basic salary \t");
scanf("%d",&BS);
if(BS>20000)
{
DA=0.05*BS;
printf("\n Your DA is \t %d \t",DA);
HRA=0.05*BS;
printf("\n Your HRA is \t %d \t",HRA);
CA=0.05*BS;
printf("\n Your CA is \t %d \t",CA);
}
else
{
DA=0.02*BS;
printf("\n Your DA is \t %d \t",DA);
HRA=0.02*BS;
printf("\n Your HRA is \t %d \t",HRA);
CA=0.02*BS;
printf("\n Your CA is \t %d \t",CA);
}
GS=BS+DA+HRA+CA;
printf("\n Your Gross salary is \t %d \t",GS);
if(GS>22000)
{
PF=0.1*GS;
printf("\n Your PF is \t %d \t",PF);
}
else
{
PF=0.05*GS;
printf("\n Your PF is \t %d \t",PF);
}
NS=GS-PF;
printf("\n Your Net Salary is \t %d \t",NS);
getch();
}

