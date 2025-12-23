//odd even
#include <stdio.h>

int main() 
{
    int n, i, even = 0, odd = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);        
        if(arr[i] % 2 == 0) 
        {
            even++; // Increment even counter
        } else 
        {
            odd++;  // Increment odd counter
        }
    }

    printf("Total Even numbers: %d\n", even);
    printf("Total Odd numbers: %d\n", odd);

    return 0;
}