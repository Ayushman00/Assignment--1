#include<stdio.h>
int main()
{
int n,i;
  printf("Enter the no. of elements of \n ");
  scanf("%d",&n);
int arr[n];
 printf ("Enter elements of  array\n");

  for( i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int max=arr[0],min=arr[0];
for (i=0;i<n;i++){
if(max<arr[i])
max=arr[i];
}
for (i=0;i<n;i++){
if(min>arr[i])
min=arr[i];
}
printf("The maximum element of the array is %d",max);
printf("The minimum element of the array is %d",min);
return 0;
 }
