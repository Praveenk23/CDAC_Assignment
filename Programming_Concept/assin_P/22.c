#include<stdio.h>
void getDate(int *date, int *month, int *year){
	printf("Enter date, month, year: ");
	scanf("%d%d%d", &*date, &*month, &*year);
}

int main(){
	int date, month, year;
	getDate(&date, &month, &year);
	printf("%d/%d/%d\n",date, month, year);
}

