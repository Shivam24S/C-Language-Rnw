

#include <stdio.h>


int addition(){

    return  5+10;
}

int square(){

    int value=2;

    return value*value;
}


int main(){




    int result1 = addition();

    printf("result1 %d\n",result1);


    int squareOfTwo = square();

    printf("square of two %d\n",squareOfTwo);





    return 0;
}