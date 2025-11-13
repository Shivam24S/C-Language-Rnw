



#include <stdio.h>



int main(){


    char color;

    printf("enter signal color (g=green,r=red,y=yellow)");

    scanf("%c",&color);

    switch(color){

        case 'g':
        printf("you can go\n");
        break;

        case 'r':
        printf("you have to stop\n");
        break;

        case 'y':
        printf("you have to prepare for stop\n");
        break;

        default:
        printf("invalid choice choose g,r,y\n");


    }

    return 0;

}




// #include <stdio.h>


// int main(){

//     char color;


//     printf("choose signal color (g=green,r=red,y=yellow) \n");

//     scanf("%c",&color);

//     if(color == 'g'){

//         printf("you can go\n");
//     }else if(color == 'r'){
//           printf("you have to stop\n");

//     }else if(color == 'y'){
//          printf("you have to prepare for stop\n");

//     }else {
//          printf("invalid choice choose g,r,y\n");
//     }

//     return 0;


// }