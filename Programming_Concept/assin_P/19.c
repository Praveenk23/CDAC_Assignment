#include<stdio.h>
void fib(int n){
    int pre1 = 0, pre2 = 1, sum = 0;
    printf("%d %d ", pre1, pre2);
    for(int i = 0; i < n - 2; i++){
        sum = pre1 + pre2;
        printf("%d ", sum);
        pre1 = pre2;
        pre2 = sum;
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    fib(n);
    return 0;
}
