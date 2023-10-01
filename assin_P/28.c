#include<stdio.h>

void Accept(int (*arr)[3])
{
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%d", *(arr+i)+j);
		}
	}
	
}

void Display(int (*arr)[3])
{
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d ", *(*(arr+i)+j));
		}
		printf("\n");
	}
	
}

void mulMatrix(int (*a)[3], int (*b)[3])
{
        int c[3][3]={0};
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			for(int k=0; k<3; k++)
			{
				c[i][j] = c[i][j] + a[i][k] + b[k][j];
			}
		}
	}
	Display(c);
	
}

int main()
{
  	int arr[3][3],b[3][3];
	
	printf("Enter element of matrix a: \n");
	Accept(arr);
	printf("Enter element of matrix b: \n");
	Accept(b);
	printf("Multiplication of matrix axb: \n");
	mulMatrix(arr,b);
	
	
	printf("\n");
	
	return 0;
}

