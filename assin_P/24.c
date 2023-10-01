#include<stdio.h>

 void MaxMin(int arr[], int n){
	int max, min,i;
	max = arr[0];
	
	for(int i = 1; i < n; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("Maximum of these is %d\n", max);
	
	min = arr[0];
	
	for(int i=1; i<n; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("Minimum of these is %d\n", min);
}

void MultiplyByFive(int *arr, int n){
	int temp[100],i;
	for(int i = 0; i < n; i++){
		temp[i] = arr[i] * 5;
	}
	printf("Multiply by five is ");
	for(int i = 0; i < n; i++){
		printf("%d ", temp[i]);
	}
	printf("\n");
}


int main(){
	int arr[100],n,i;
	printf("How many elements:\n");
	scanf("%d",&n);
	printf("Enter n elements:\n");
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	MaxMin(arr,n);
	MultiplyByFive(arr,n);
	printf("\n");
	
	return 0;
}



