#include <stdio.h>

// Function to calculate the sum of digits
int sumOfDigits(int num) {
    int sum = 0;

    // Extract digits and add to sum
    while (num != 0) {
        sum += num % 10;   // Get last digit
        num = num / 10;    // Remove last digit
    }

    return sum;
}

int main() {
    int number;

    // Prompt user for input
    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Call function and display result
    int result = sumOfDigits(number);
    printf("Sum of digits = %d\n", result);

    return 0;
}
