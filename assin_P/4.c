#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter two numbers\n");
	scanf("%d%d", &a, &b);

	printf("Before Swaping a: %d, b: %d\n",a,b);
    /*
     int temp=0;
     temp =a;
     a=b;
     b=temp;
     */
	a=a+b;
	b=a-b;
	a=a-b;

	printf("After Swaping a: %d, b: %d\n",a,b);

	return 0;
}
