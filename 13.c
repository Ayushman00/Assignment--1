#include<stdio.h>
int main()
{

 int n;  
printf("Enter the number ");
scanf("%d",&n);
if (n>=1)
{
int fact=1;
for (int i=1;i<=n;i++)
{
fact=fact*i;
}
printf("The factorial of given number  is %d",fact);
}
else if(n==0)
 printf("The factorial of given number  is 1");
else 
printf("please enter positive number");
 return 0;
  }
