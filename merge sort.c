//merge sort
#include <stdio.h>

// Function to merge two halves arr[left..mid] and arr[mid+1..right] of array arr[]
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;    // Size of left subarray
    int n2 = right - mid;       // Size of right subarray

    // Temporary array to store merged subarray
    int temp[right - left + 1];

    // Initialize indices for subarrays and temporary array
    i = left;    // Initial index for left subarray
    j = mid + 1; // Initial index for right subarray
    k = 0;       // Initial index for temporary array

    // Merge subarrays into temporary array
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    // Copy remaining elements of left subarray, if any
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Copy remaining elements of right subarray, if any
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // Copy merged elements from temporary array back to original array
    for (i = left; i <= right; i++) {
        arr[i] = temp[i - left];
    }
}

// Function to perform merge sort on array arr[] from index left to right
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;    // Find the middle index

        // Recursively sort left and right halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge sorted halves
        merge(arr, left, mid, right);
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, size);

    // Perform merge sort
    mergeSort(arr, 0, size - 1);

    printf("\nSorted array:\n");
    printArray(arr, size);

    return 0;
}
