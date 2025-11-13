

#include <stdio.h>


int main(){

    int marks;

    printf("enter your marks\n");

    scanf("%d",&marks);

    if(marks>=90){
        printf("you have achieved A grade \n");
    }else if(marks>=80){
        printf("you have achieved B grade \n");
    }else if(marks>=70){
        printf("you have  achieved C grade \n");
    }else if (marks>=35){
        printf("you have achieved D grade \n");

    }else{
        printf("you have failed this exam");
    }


    return 0;


}