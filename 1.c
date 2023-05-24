include<stdio.h>

int main()
{
 int s1,s2,s3,s4,s5;
 printf("Enter the marks of 5 subjects\n ");
 scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
 int sum, percentage;
 sum = s1+s2+s3+s4+s5;
 percentage = (s1+s2+s3+s4+s5)/5;
 printf("The sum of 5 subjects is = %d",sum);
 printf("\nThe percentage of 5 subjects is = %d" , percentage);
 return 0;
}
