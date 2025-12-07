


#include <stdio.h>


int main(){

    int num = 5;

    int *ptr = &num;

    int **p = &ptr;

    printf("%d\n",num);
    printf("%d\n",**p);
    printf("%d\n",*ptr);


    return 0;
}