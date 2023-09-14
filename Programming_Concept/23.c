#include<stdio.h>
int maximum = 0;
int* max(int a, int b){
	if(a >= b){
		maximum = a;
	}
	else{
		maximum = b;
	}
	return &maximum;
}
int main(){
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	int *maxi = max(a,b);
	printf("Maximum of these are: %d\n",*maxi);
}

