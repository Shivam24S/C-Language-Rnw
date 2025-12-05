

#include <stdio.h>


int main() {


    int a =5 ;

    int *ptr = &a;

    printf("%d",ptr);
    printf("\n after %d",ptr+1);

    return 0;
}