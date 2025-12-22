//average and sum
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    float average;

    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i]; // Add current element to sum
    }

    average = (float)sum / n; // Typecast sum to float for decimal result

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}