#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to swap two numbers
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Bubble sort algorithm
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    // Seed the random number generator
    srand(time(0));
    
    // Create an array to store the random numbers
    int arr[10000];
    
    // Generate random numbers and store them in the array
    for (int i = 0; i < 10000; i++) {
        arr[i] = rand();
    }
    
    // Get the starting time
    clock_t start = clock();
    
    // Sort the array using bubble sort
    bubbleSort(arr, 10000);
    
    // Get the ending time
    clock_t end = clock();
    
    // Calculate the execution time in seconds
    double time_taken = (double)(end - start) * 1000 / CLOCKS_PER_SEC;

    printf("Bubble Sort executed in %f ms.\n", time_taken);
    
    return 0;
}