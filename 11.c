#include<stdio.h>
int main()
{

 int a,b,c;
 char ch;
 
 printf(" Enter operator like (+,-,*,/) \n ");
 scanf("%c",&ch);
 printf("Enter the values of a and b \n ");
 scanf("%d%d",&a,&b);
 switch(ch)
{
 case '+' : c = a + b;
  printf("%d",c);
 break;
 case '-' : c = a - b;
  printf("%d",c);
 break;
 case '*' : c = a * b;
  printf("%d",c);
 break;
 case '/' : c = a / b;
  printf("%d",c);
 break;
 default : printf("invalid operator");
 break;
}
 return 0;
  }
