#include<stdio.h>
int main()
{

 int n,i,reverse=0;
printf("Enter the number\n");
scanf("%d",&n);

while(n>0)
{
i=n%10;
reverse=(reverse*10)+i;
n=n/10;
}
printf("The reverse of digits is %d",reverse);


return 0;
 } 
