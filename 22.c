#include<stdio.h>
int main()
{
int n,i;
  printf("Enter the no. of elements of \n ");
  scanf("%d",&n);
int arr1[n],arr2[n],sumarr[n];
 printf ("Enter elements of first array\n");

  for( i=0;i<n;i++){
scanf("%d",&arr1[i]);
}
printf ("Enter elements of second array\n");
 for ( i=0;i<n;i++){
scanf("%d",&arr2[i]);
}

 for(i=0;i<n;i++){
sumarr[i]=arr1[i]+arr2[i];
}
printf("The sum of corresponding elements of both arrays are");
for (i=0;i<n;i++){
printf("%d\n",sumarr[i]);
}
return 0;
 } 
