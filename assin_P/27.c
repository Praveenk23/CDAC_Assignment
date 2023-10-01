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


void matTranspose(int (*arr)[3])
{
	int matTrans[3][3],i,j;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			matTrans[j][i] = arr[i][j];
		}
	}
	Display(matTrans);
}

void add2Matrix(int (*a)[3], int (*b)[3])
{
	int c[3][3];
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	Display(c);
	
}


int main()
{
	int arr[3][3],a[3][3],b[3][3];
	
	printf("Enter element of matrix: \n");
	Accept(arr);
	printf("Matrix is:\n");
	Display(arr);
	printf("Transpose of matrix is:\n");
	matTranspose(arr);
	printf("Enter element of matrix a: \n");
	Accept(a);
	printf("Enter element of matrix b: \n");
	Accept(b);
	printf("Sum of the matrix a+b: \n");
	
	add2Matrix(arr,b);
	
	
	
	printf("\n");
	
	return 0;
}
