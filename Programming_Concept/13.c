//to check if a number is prime or not
#include<stdio.h>
int main(){
	int n;
	int flag = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(int i = 2; i * i < n; i++){
		if(n % i == 0){
			flag = 1;
			break;
		}
	}
	if(flag) printf("Not a prime number\n");
	else printf("Prime number\n");
}

