
#include<stdio.h>
int main(){
    int a, b;
    int opt;
    printf("Choose any of the following...\n");
    printf("1. Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&opt);
    switch(opt){
        case 1:
        printf("Enter two numbers: ");
        scanf("%d%d",&a,&b);
        printf("Addition = %d\n",a + b);
        break;
        case 2:
        printf("Enter two numbers: ");
        scanf("%d%d",&a,&b);
        printf("Subtration = %d\n",a - b);
        break;
        case 3:
        printf("Enter two numbers: ");
        scanf("%d%d",&a,&b);
        printf("Multiplication = %d\n",a * b);
        break;
        case 4:
        printf("Enter two numbers: ");
        scanf("%d%d",&a,&b);
        printf("Division = %d\n",a / b);
        break;
        default:
        printf("Invalid option!!!\n");
    }
}
