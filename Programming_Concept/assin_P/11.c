#include<stdio.h>
int main(){
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    int b = a;
    if(b >= 65 && b <= 90 || b >= 97 && b <= 122){
        if(b >= 65 && b <= 90)
            printf("%c\n",(char)(b + 32));
        else
            printf("%c\n",(char)(b - 32));
    }
    else printf("Please enter alphabet...\n");
}
