//linear search
#include <stdio.h>

int main() {
    int n, i, key, found = 0; // 'found' acts as a flag (0 = no, 1 = yes)

    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements: ");
    for(i=0; i<n; i++) scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &key);

    for(i=0; i<n; i++) {
        if(arr[i] == key) {
            found = 1; // Mark as found
            printf("Number %d found at position %d (index %d)\n", key, i+1, i);
            break; // Stop searching once found
        }
    }

    if(found == 0) {
        printf("Number not found in the array.\n");
    }

    return 0;
}