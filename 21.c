#include<stdio.h>

int main()

{

int n;

  printf("Enter the no. of elements ");

  scanf("%d",&n);

int arr[n];

 printf ("Enter elements of array\n");

int sum=0;

  for(int i=0;i<n;i++)

{

scanf("%d",&arr[i]);

sum=sum+arr[i];

}

printf("%d",sum);

return 0;

 } 
