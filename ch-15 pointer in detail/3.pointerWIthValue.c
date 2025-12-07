


#include <stdio.h>


void change(int x){

    x = 20;


}


int main(){

    int num = 50;

    change(num);

    printf("%d",num);

}