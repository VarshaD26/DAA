//fibonacci series
#include <stdio.h>

// Function to generate Fibonacci series up to a given value
void generateFibonacci(int max_value) {
    int a = 0, b = 1;

    // Print the first Fibonacci number (0)
    printf("%d ", a);

    // Generate Fibonacci numbers until the next number exceeds max_value
    while (b <= max_value) {
        printf("%d ", b);
        b = a + b;
        a = b - a;
    }

    printf("\n");
}

int main() {
    int max_value;

    // Input the maximum value up to which Fibonacci series is to be generated
    printf("Enter the maximum value for Fibonacci series: ");
    scanf("%d", &max_value);

    // Generate and print Fibonacci series up to max_value
    generateFibonacci(max_value);

    return 0;
}
