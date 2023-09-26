#include<stdio.h>
#include<string.h>

typedef struct BOOK
{
	int bookid;
	char title[20];
	double price;
}book;

int main()
{
	book b1;
	book b2;
	
	printf("Enter the bookId, title and Price: \n");
	scanf("%d%s%lf", &b1.bookid, b1.title, &b1.price);
	printf("%d %s %lf\n", b1.bookid, b1.title, b1.price);
	
	return 0;
	
}
