#include<stdio.h>
int main(){
    int year;
    printf("Enter year: \n");
    scanf("%d", &year);

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("Leap year\n");
    else
        printf("Not a leap year\n");

    
    //ternary operator
    (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?
        printf("Leap year\n"):
        printf("Not a leap year\n");
}
