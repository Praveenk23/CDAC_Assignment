#include<stdio.h>
#include<string.h>

typedef struct BOOK
{
	int bookid;
	char title[20];
	double price;
}book;

void DisplayRec(book b[5])
{
	for(int i=0; i<5; i++)
	{
		printf("BookId:%d, Title:%s, Price:%lf\n", b[i].bookid, b[i].title, b[i].price);
	}
	

}

int main()
{
	book b[5];
	for(int i=0; i<5; i++){
		printf("Enter the bookId, title and Price: \n");
		scanf("%d%s%lf", &b[i].bookid, b[i].title, &b[i].price);
	}
	

	DisplayRec(b);
	
	return 0;
	
}
