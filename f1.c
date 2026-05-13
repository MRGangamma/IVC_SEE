#include <stdio.h>

int main() {
    int arr[] = {45, 23, 78, 12, 56, 89, 34, 91, 67, 10, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int max = arr[0];
    int min = arr[0];
    
    // Find max and min values in array
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    
    return 0;
}added new feature line
