#include<stdio.h>

int main()
{
	int a,b,c,d,e;
    int sum = 0;
    float avg = 0;

	printf("Enter marks of five subject: \n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    sum = a+b+c+d+e;
    avg = sum/5;
    
    puts("Implicit conversion:");

    printf("Average marks of 5 subjects: %f\n", avg);


    puts("Explicit conversion:");
    avg =(float) sum/5;
    printf("Average marks of 5 subjects: %f\n", avg);


	
	
	return 0;
}
