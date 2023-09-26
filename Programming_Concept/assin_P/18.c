#include<stdio.h>

void charline(char c, int l){
    for(int i = 0; i < l; i++)
        printf("%c",c);
    printf("\n");
}

int main(){
    char c;
    int l;
    printf("Enter character of the line: ");
    scanf("%c",&c);
    printf("Enter the length of the line: ");
    scanf("%d",&l);
    charline(c,l);
    printf("\tData Types\tSize in Bytes\t\n");
    charline(c,l);
    printf("\tInteger\t\t\t4\t\n");
    charline(c,l);
    printf("\tCharacter\t\t1\t\n");
    charline(c,l);
    printf("\tFloat\t\t\t4\t\n");
    charline(c,l);
    
    return 0;
}
