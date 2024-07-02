//2 .WAP to accept 5 numbers from user and display all numbers 

#include <stdio.h>

int main() {
    int numbers[5];
    int i;

    // Accepting 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Displaying all numbers
    printf("\nYou entered the following numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}

