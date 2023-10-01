#include <stdio.h>

int main()
{
	int arr[50], n,i,j;
	printf("How many array elements u want: ");
	scanf("%d",&n);
	printf("Insert the array elements: ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
		
	}

	int temp;
	for(i=0,j=n-1; i<j; i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
		
	}
	
	return 0;
}
