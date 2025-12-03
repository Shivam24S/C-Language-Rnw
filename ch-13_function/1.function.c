

#include <stdio.h>



// function declaration
int total(int a, int b){
    return a+b;
}

int minus(int a,int b){

    return a-b;
}



int main(){


    int result = total(5,10);

    int result2 = total(20,25);

    printf("result1 :%d\n",result);
    printf("result2 :%d\n",result2);


    int minus1Result = minus(5,10);

    printf("minus1 result %d\n",minus1Result);


    return 0;
}