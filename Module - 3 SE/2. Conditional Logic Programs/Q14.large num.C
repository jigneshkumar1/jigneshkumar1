//14. WAP to find the largest of three numbers. 

#include <stdio.h>

int main() {
    double num1, num2, num3;

    // Input three numbers from user
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // Check for the largest number
    if (num1 >= num2 && num1 >= num3)
        printf("%.2lf is the largest number.\n", num1);
    else if (num2 >= num1 && num2 >= num3)
        printf("%.2lf is the largest number.\n", num2);
    else
        printf("%.2lf is the largest number.\n", num3);

    return 0;
}

