//bubble sort
#include <stdio.h>

int main() {
    int n = 5, i, j, temp;
    int arr[] = {64, 34, 25, 12, 22};

    // Bubble Sort Logic
    for(i = 0; i < n-1; i++) {       // Outer loop for passes
        for(j = 0; j < n-i-1; j++) { // Inner loop for comparison
            if(arr[j] > arr[j+1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Bubble Sorted: ");
    for(i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}
