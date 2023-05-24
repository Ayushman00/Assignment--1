#include<stdio.h>

int main()
{
 float principal,rate;
 int time ;
 printf("Enter principal\n");
 scanf("%f",&principal);
 printf("Enter time\n");
 scanf("%d",&time);
 printf("Enter Rate\n");
 scanf ("%f",&rate);
  float si, ci;
  si = principal * time* rate;
  ci=(principal*(pow((1+rate),time)))- principal; 
  printf ("simple interest is =%f\n",si);
  printf ("compound interest is =%f\n", ci);
 return 0;
  }
