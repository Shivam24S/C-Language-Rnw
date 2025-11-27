

#include <stdio.h>


int main(){


    int num[5] = {1,2,3,4,5};
    
    
    for(int i=0;i<=4;i++){
        printf("%d\n",num[i]);
    }


    num[2]=10;

       for(int i=0;i<=4;i++){
        printf("%d\n",num[i]);
    }


    // dynamic update 

    printf("enter number\n");

    scanf("%d",&num[4]);

        for(int i=0;i<=4;i++){
        printf("%d\n",num[i]);
    }




    return 0;

}