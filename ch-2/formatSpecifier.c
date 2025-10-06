

#include<stdio.h>

int main(){

    // example 1

    int num=1;

        printf("%d\n",num);

    printf("%5d\n",num);


    // example 2


    int num2=2;

    printf("%2.2d\n",num2);


    // example 3
   
    
    float num3= 24.007;

    printf("%f\n",num3);

      printf("%.1f\n",num3);

     printf("%10.1f\n",num3);
    

    //  example 4
    // will  not truncate the original value if width is less than origin value length

      float num4= 2412345.007;

     printf("%2.1f\n",num4);


    //  char example 

    char character = 'a';

    printf("%c",character);
  



    return 0;
}