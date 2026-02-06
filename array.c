#include<stdio.h>
int main(){
	int n,i,search,found=0;
	printf("enter number of elements in the array:");
	scandf("%d",&n);
    int arr [n];
	Printf("enter elements of the array:\n");
	for(i=0;i<n;i++);
        scanf("%d",&arr[i]);
    }
    printf("enter the elements to search");
    scanf("%d",&seacrh);
    for(i=0;i<n;i++){
    	if(arr[i]==search){
    		found=1;
    		printf("elements %d found at index %d\n",search,i);
    		break;
        }   
    }
    if(!found){
    	printf("Element %d not found in the array\n",search);
    }
    return 0;
}
    
    	
