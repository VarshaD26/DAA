//find the number of digits of a binary corresponding to decimal number
#include <stdio.h>

// Function to count number of digits in binary representation
int countBinaryDigits(int n) {
    int count = 0;

    // Continue dividing the number by 2 until it becomes 0
    while (n > 0) {
        n = n / 2;
        count++;
    }

    return count;
}

int main() {
    int decimalNumber;

    // Input the decimal number from user
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Get the number of binary digits
    int numBinaryDigits = countBinaryDigits(decimalNumber);

    // Output the result
    printf("Number of digits in binary representation of %d is: %d\n", decimalNumber, numBinaryDigits);

    return 0;
}
