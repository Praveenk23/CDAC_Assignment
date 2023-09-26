#include<stdio.h>
int main(){
    int count = 0;
    /*
    for(int i = 0; i < 5; i++){
        for(int j = 1; j<= 5; j++){
            if((j - i) <= 0) continue;
            printf("%d", j - i);
        }
        printf("\n");
    }
    */
    for(int i = 0; i < 5; i++){
        for(int j = 1; j <= 9; j++){
            if( i > 0){
            }
            if(j > 5){
                printf("%d ", 9 - j + 1);
            }
            else
                printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
