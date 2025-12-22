#include <stdio.h>

int main() 
{
    int n, i, max, sec_max;
    int arr[] = {10, 50, 5, 20, 30}; 
    n = 5;

    if (n < 2) 
    {
        printf("Array is too small");
        return 0;
    }

    if (arr[0] > arr[1]) {
        max = arr[0];
        sec_max = arr[1];
    } else {
        max = arr[1];
        sec_max = arr[0];
    }

    for (i = 2; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            sec_max = max;     
            max = arr[i];      
        }
        else if (arr[i] > sec_max && arr[i] != max) 
        {
            sec_max = arr[i];  
        }
    }

    printf("Second Largest: %d", sec_max);
    return 0;
}