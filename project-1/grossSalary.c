

#include <stdio.h>


int main(){

    float basicSalary,grossSalary,DA,TA,HRA;

    float daAmount,taAmount,hraAmount;

    // basicSalary =100;


    printf("enter basic salary\n");
    scanf("%f",&basicSalary);

    printf("enter your Da\n");

    scanf("%f",&DA);


    printf("enter your TA\n");

    scanf("%f",&TA);

    printf("enter your HRA\n");

    scanf("%f",&HRA);

    // DA=5;

    // TA=8;

    // HRA=10;

    daAmount = (basicSalary*DA)/100;

    taAmount = (basicSalary*TA)/100;

    hraAmount = (basicSalary*HRA)/100;


    printf("da%f",daAmount);


    grossSalary = basicSalary + daAmount + taAmount +hraAmount;

    printf("Gross Salary:%.2f",grossSalary);


    return 0;

}