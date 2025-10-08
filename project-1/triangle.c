

// #include <stdio.h>


// int main(){

//     float firstAngel,secondAngel,ThirdAngel;

//     firstAngel = 65;

//     secondAngel = 45;

//     ThirdAngel = 180 - (firstAngel +secondAngel);

//     printf("Third angel: %.2f",ThirdAngel);


//     return 0;

// }

// now dynamic


#include <stdio.h>

int main(){


    float firstAngle,thirdAngle,secondAngle;

    printf("enter first angle\n");

    scanf("%f",&firstAngle);

    printf("enter second angle\n");

    scanf("%f",&secondAngle);

    thirdAngle = 180 - (firstAngle + secondAngle);

    printf("Third angel: %.2f",thirdAngle);


    return 0;



}