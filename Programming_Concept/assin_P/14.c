#include<stdio.h>
int main(){
    int l, b;
    printf("Enter length and breath: ");
    scanf("%d%d",&l,&b);
    char ch;
    __fpurge(stdin);
    printf("Enter the character you want: ");
    scanf("%c",&ch);
    for(int i = 0; i < b; i++){
        for(int j = 0; j < l; j++){
            if(j >= 1 && j < l - 1 && i >= 1 && i < b - 1){
                printf(" ");
            }
            else{
                printf("%c",ch);
            }
        }
        printf("\n");
    }
}
