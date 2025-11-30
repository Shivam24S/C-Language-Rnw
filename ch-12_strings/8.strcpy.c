#include <stdio.h>

#include <string.h>


int main(){

    char word[] = "hello good morning";

    char copy[sizeof(word)] ="";

    strcpy(copy,word);

    printf("copy :%s",copy);

    return 0;

}