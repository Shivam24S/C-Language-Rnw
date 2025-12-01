

#include <stdio.h>

// #include<string.h>

#include <ctype.h>


int main(){

    char word[] ="abcdefgh";

    char upperCase[sizeof(word)];

    int i;

    for(i=0;word[i]!='\0';i++){
        upperCase[i] = toupper(word[i]);

    }

    upperCase[i]='\0';

    printf("uppercase :%s",upperCase);

    return 0;
}