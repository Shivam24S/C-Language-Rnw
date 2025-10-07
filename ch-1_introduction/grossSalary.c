

#include <stdio.h>


int main(){
    // float grossSalary,BaseSalary,HRA,DA,TA,hraPercentage,daPercentage,taPercentage;


    float grossSalary,baseSalary,hraPercentage,daPercentage,taPercentage;

    baseSalary=100;

    float hraPercent = 10;
    float daPercent = 5;
    float taPercent = 8;

    hraPercentage = (baseSalary*hraPercent)/100;

    daPercentage = (baseSalary*daPercent)/100;

    taPercentage=(baseSalary*taPercent)/100;


    grossSalary = baseSalary + hraPercentage + daPercentage + taPercentage;



    printf("Gross salary: %.2f",grossSalary);

    return 0;



}