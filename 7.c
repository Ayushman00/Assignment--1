#include<stdio.h>
int main()
{

int a,b,c;
printf("Enter the value of a,b and c :-\n");
scanf("%d%d%d",&a,&b,&c);
 if(a>=b && a>=c)
{
 printf("%d is greatest number ",a);
}
if(b>=c && b>=a)
{
printf("%d is greatest number",b);
}
if(c>=a && c>=b)
{
printf(" %d is greatest number",c);
}
 return 0;
  }
