#include<stdio.h>
int main()
{
int n,temp;
int i,j;
printf(“enter number of element:”);
scanf(“%d”,&n);
int arr[n];
printf(“enter %d elements:\n”,n);
for(i=0;i<n;i++)
scanf(“%d”,&arr[i]);
//bubble sort logic
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
printf(“sorted array:\n”);
for(i=0;i<n;i++)
printf(“%d”,arr[i]);
return 0;
}
