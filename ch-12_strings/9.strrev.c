

#include <stdio.h>

#include<string.h>



int main(){


    char alphabet[]="abcdefg";

    char reverseAlphabet[sizeof(alphabet)];

    int length = strlen(alphabet);

    printf("length :%d\n",length);

    printf("alphabet :%s\n",alphabet);

    int i,j;


    for(i=length-1,j=0;i>=0;i--,j++){
        reverseAlphabet[j] = alphabet[i];
    }

    reverseAlphabet[j] = '\0';

    printf("reverse string : %s\n",reverseAlphabet);


    return 0;



}