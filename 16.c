#include<stdio.h>
int main()
{

 int n;
printf("Enter the number\n");
scanf("%d",&n);
for(int i=2;i<n;i++)/* bcoz any number is always divisible by itself and 1*/
{
  if(n%i==0)
   {
    printf("The %d is not prime number\n",n);
    break;
   }
  else
   {
    printf("The %d is prime number\n",n);
    break;
   }
}

return 0;
 }
