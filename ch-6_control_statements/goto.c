


#include <stdio.h>

int main(){


  int num=10;


  if(num<5){
    goto small;
  }else {
    goto big;
  }


  small:
  printf("number is smaller than 5");


  big:
  printf("number is greater than 5");

  return 0;


}