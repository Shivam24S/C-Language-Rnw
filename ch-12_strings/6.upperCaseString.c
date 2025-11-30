

#include  <stdio.h>

#include <ctype.h>


int main(){


    char word[]="goodMorning";

    char uppercase[]="";

    int i;


    for(i=0;word[i]!='\0';i++){
         uppercase[i]= toupper(word[i]);
    }

    uppercase[i]='\0';
    printf("uppercase: %s",uppercase);

    return 0;


}