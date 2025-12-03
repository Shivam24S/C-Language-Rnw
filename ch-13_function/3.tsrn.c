

#include <stdio.h>


void greetingMsg(char msg[]){

    printf("%s\n",msg);
}


void multiplication(int a,int b){

    printf("Multiplication Result %d\n",a*b);


}



int main(){


    greetingMsg("hello");

    multiplication(5,2);



    return 0;
}