#include<stdio.h>

void max(int *a){
	int m = a[0];
	for(int i = 1; i < 5; i++){
		if(a[i] > a[i - 1]){
			m = a[i];
		}
	}
	printf("Maximum of these is %d\n", m);
}

void diffArr(int *a){
	int arr[5];
	for(int i = 0; i < 5; i++){
		arr[i] = a[i] * 5;
	}
	for(int i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int main(){
	int a[5];
	printf("Enter 5 numbers: ");
	for(int i = 0; i < 5; i++){
		scanf("%d", &a[i]);
	}
	max(a);
	diffArr(a);
}

