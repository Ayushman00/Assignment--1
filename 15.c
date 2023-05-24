include<stdio.h>
int main()
{

 int n1=0,n2=1,n3,number;
 printf("Enter number of terms\n");
scanf("%d",&number);
 printf("%d  %d",n1,n2);
 for(int i=2;i<=number;++i) /* because first two terms are already printed */
{
n3=n1+n2;
printf(" %d ",n3);
n1=n2;
n2=n3;
}
 return 0;
  }
