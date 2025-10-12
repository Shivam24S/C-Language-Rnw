

#include <stdio.h>


int main(){

    char color;

    printf("enter traffic color (g = green, y = yellow, r = red):\n");

    scanf(" %c",&color);


    switch(color){

        case 'g':
        printf("you can go");
        break;

        case 'y':
        printf("you have to prepare for stop");
        break;

        case 'r':
        printf("you have to stop");
        break;

        default:
        printf("please choose correct color");

  


    }

          return 0;

}