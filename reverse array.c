#include<stdio.h>
int main()
{
 int i,n,a[10];
 printf("input the no of elements to store in array:");
 scanf("%d",&n);
 printf("input %d number of elements  in array\n",n);
 for(i=0;i<n;i++)
 {
     printf("\nelement-%d:",i);
     scanf("%d",&a[i]);
 }
 printf("\nvalues to store in array\n");
 for(i=0;i<n;i++)
 {
     printf("%d",a[i]);
 }
 printf("\nvalues after reverse\n");
 for(i=n-1;i>=0;i--)
 {
     printf("%d",a[i]);
 }
 printf("\n\n");
}
