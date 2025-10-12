

#include <stdio.h>


int main(){

    float a;
    float b;

    char operation;

    printf("enter first num value\n");
    scanf("%f",&a);

    printf("enter second num value\n");
    scanf("%f",&b);

    printf("enter math operation do you want to perform (+,-,/,*,) ");

    scanf(" %c",&operation);


    switch(operation){

        case '+':
        printf("addition: %f\n",a+b);
        break;

        case '-':
        printf("substfraction: %f\n",a-b);
        break;

        case '*':
        printf("multiplication: %f\n",a*b);
        break;

        case '/':
        printf("division: %f\n",a/b);
        break;

        default:
        printf("please choose correct operation");






    }
    return 0;

}