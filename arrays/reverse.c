//reverse of array
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements: ");
    for(i=0; i<n; i++)
    {
    scanf("%d", &arr[i]);
    }

    printf("Array in Reverse: ");
    // Start i at the last index (n-1) and go down to 0
    for(i = n-1; i >= 0; i--) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}