

#include <stdio.h>


int main(){


    // insertion ->create

    int num[5] ={1,2,3,4,5};


    // iteration  -> read

    // for(int i=0;i<=4;i++){
    //     printf("%d\n",num[i]);
    // }

    // printf("enter number\n");

    // scanf("%d",&num[3]);

    // printf("updated value: %d\n",num[3]);


    // delete

    int pos=2;

    for(int i=pos;i<=4;i++){
        num[i] = num[i+1];
    }

       for(int i=0;i<=3;i++){
        printf("%d\n",num[i]);
    }


    return 0;

}