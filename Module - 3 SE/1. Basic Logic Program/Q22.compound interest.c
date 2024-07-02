//22. Calculate compound interest (Compound Interest formula: 
//a. Formula to calculate compound interest annually is given by: 
//Amount= P(1 + R/100)t 


#include <stdio.h>
#include <math.h>

int main() {
    float salary, rate, time, amount;

    
    printf("Enter a salary : ");
    scanf("%f", &salary);

    
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);

    
    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate compound interest
    amount = salary * pow(1 + (rate / 100), time);

    
    printf("Compound interest after %.2f years: %.2f\n", time, amount);
    
   //b. Compound Interest = Amount – P 
    float compount_intrest;
    compount_intrest= amount-salary;
    
    printf("Compound Interest : %.2f",compount_intrest);
    

   
    return 0;
}
