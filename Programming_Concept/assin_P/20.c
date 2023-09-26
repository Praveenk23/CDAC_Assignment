#include<stdio.h>
#define PI 3.14
#define RAD (180 / PI)

int factorial(int x){
    int fact = 1;
    for(int i = x; i >= 1; i--)
        fact*= i;
    return fact;
}

int power(int x, int y){
    int p = 1;
    for(int i = 0; i < y; i++)
        p *= x;
    return p;
}

int main(){
    int x;
    printf("Enter the value of x: ");
    scanf("%d",&x);

    double ans = 1;


    

    return 0;
}
