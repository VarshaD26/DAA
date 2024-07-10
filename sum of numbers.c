//sum of numbers
#include <stdio.h>

// Function to calculate sum of elements in an array (normal approach)
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to calculate sum of elements in an array (divide and conquer approach)
int sumArrayDC(int arr[], int left, int right) {
    if (left == right) {
        return arr[left];
    } else {
        int mid = left + (right - left) / 2;
        int sumLeft = sumArrayDC(arr, left, mid);
        int sumRight = sumArrayDC(arr, mid + 1, right);
        return sumLeft + sumRight;
    }
}

// Main function
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Calculate sum using normal approach
    int sum_normal = sumArray(arr, size);
    printf("Sum of array elements (normal approach): %d\n", sum_normal);

    // Calculate sum using divide and conquer approach
    int sum_dc = sumArrayDC(arr, 0, size - 1);
    printf("Sum of array elements (divide and conquer approach): %d\n", sum_dc);

    return 0;
}
