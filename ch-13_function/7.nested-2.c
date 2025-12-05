

#include <stdio.h>


int addition(){

    return 5+10;

}


void result(){

   

    int result   = addition();

     printf("addition of numbers: %d\n",result);
}




int main(){

    result();

    return 0;
}