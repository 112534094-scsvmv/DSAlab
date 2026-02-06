#include<stdio.h>
int binarysearch(int ar[],int n,int key)
{
	int low = 0,high = n-1,mid;
	while(low<=high)
	{
		mid = (low+high)/2;
		
		if(arr [mid]==key)
		return mid;
		else if(arr[mid]<key)
		low=mid+1;
		else
		high=mid-1;
	}
	return-1;
}
int main()
{
	int n,key,result;
	printf("enter number of element:");
	scanf("%d",&n);
	
	int arr[n];
	printf("enter %d sorted element:\n",n);
	for (int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	printf("enter element to search:");
	scanf(%d,&key);
	
	result=binary search(arr,n,key);
	
	if(result!=-1)
	printf("element found at index %d\n",result);
	
	else
	print("enter not found\n");
	return 0;
	
}
