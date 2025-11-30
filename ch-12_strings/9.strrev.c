

#include <stdio.h>

#include <string.h>

int main(){

    char alphabet[] ="abcdefgh";

    char reverseString[sizeof(alphabet)];

    int i,j;

    int length = strlen(alphabet);


    for(i=length-1,j=0;i>=0;i--,j++){
        reverseString[j] = alphabet[i];
    }

    reverseString[j] ='\0';

    printf("reverseString: %s",reverseString);


    

    return 0;

}