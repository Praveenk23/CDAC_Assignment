#include<stdio.h>

int main(){

    int year;
    printf("Enter year: \n");
    scanf("%d", &year);

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("%d is Leap year.\n",year);
    else
        printf("%d is not leap year.\n\n",year);

    
    //ternary operator
    (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?
        printf("%d Leap year\n",year):
        printf("%d Not a leap year\n",year);
}
