


#include <stdio.h>

int main(){

    int arr[6] = {10,20,30,40,50};

    int *ptr[5];


    for(int i=0;i<5;i++){

        ptr[i] = &arr[i];

    } 


    for(int i=0;i<5;i++){
        printf("%d=>%p\n",*ptr[i],ptr[i]);
    }


    return 0;
}