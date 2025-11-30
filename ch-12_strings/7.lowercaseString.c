

#include <stdio.h>

#include <ctype.h>


int main(){

    char upperCase[]="ABCDEFGHI";

    char lowerCase[] ="";

    int i;

    for(i=0;upperCase[i]!='\0';i++){
        lowerCase[i] = tolower(upperCase[i]);
    }

    lowerCase[i]='\0';

    printf("lowerCase: %s",lowerCase);

    return 0;


}