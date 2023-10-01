#include<stdio.h>

int findoccurrences(char s[20], int l, char c){
    int count = 0;
    for(int i = 0; i < l; i++){
        if(s[i] == c) count++;
    }
    return count;
}

int findspaces(char s[20], int l){
    int count = 0;
    for(int i = 0; i < l; i++){
        if(s[i] == ' ') count++;
    }
    return count;
}

int howManyWords(char s[20], int l){
    int count = 0;
    for(int i = 0; i < l; i++){
        if(s[i] == ' ') count++;
    }
    return count + 1;
}

int main(){
    char s[20];
    printf("Enter the string: ");
    fgets(s,20,stdin);
    //gets(s);
    char c;
    printf("Enter the character you want to search: ");
    scanf("%c", &c);
    int length = (sizeof(s) / sizeof(s[0]));
    printf("'%c' occurs %d times.\n",c,findoccurrences(s,length, c));
    printf("Blank spaces occurs %d times.\n",findspaces(s,length));
    printf("Number of words is: %d\n",howManyWords(s,length));
    return 0;
}
