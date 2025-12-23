#include <stdio.h>

// Function Prototypes (Declaring them before main)
int x_strlen(char str[]);
void x_strcpy(char dest[], char src[]);
void x_strcat(char dest[], char src[]);
int x_strcmp(char str1[], char str2[]);
void x_strrev(char str[]);

int main() {
    int choice;
    char str1[100], str2[100], result[200];

    while(1) {
        printf("\n\n--- MANUAL STRING OPERATIONS MENU ---");
        printf("\n1. Find Length");
        printf("\n2. Copy String");
        printf("\n3. Concatenate Strings");
        printf("\n4. Compare Strings");
        printf("\n5. Reverse String");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        // Clear input buffer to fix skipping issues
        while ((getchar()) != '\n'); 

        switch(choice) {
            case 1:
                printf("Enter a string: ");
                scanf("%[^\n]s", str1); // logic to read spaces
                printf("Length: %d", x_strlen(str1));
                break;

            case 2:
                printf("Enter source string: ");
                scanf("%[^\n]s", str1);
                x_strcpy(result, str1);
                printf("Copied string: %s", result);
                break;

            case 3:
                printf("Enter first string: ");
                scanf("%[^\n]s", str1);
                // clear buffer again for next input
                while ((getchar()) != '\n'); 
                printf("Enter second string: ");
                scanf("%[^\n]s", str2);
                
                // Copy first to result, then attach second
                x_strcpy(result, str1);
                x_strcat(result, str2);
                printf("Concatenated string: %s", result);
                break;

            case 4:
                printf("Enter first string: ");
                scanf("%[^\n]s", str1);
                while ((getchar()) != '\n');
                printf("Enter second string: ");
                scanf("%[^\n]s", str2);
                
                int cmp = x_strcmp(str1, str2);
                if (cmp == 0)
                    printf("Strings are EXACTLY equal.");
                else if (cmp > 0)
                    printf("String 1 is greater (ASCII).");
                else
                    printf("String 2 is greater (ASCII).");
                break;

            case 5:
                printf("Enter a string: ");
                scanf("%[^\n]s", str1);
                x_strrev(str1);
                printf("Reversed string: %s", str1);
                break;

            case 6:
                return 0;

            default:
                printf("Invalid choice.");
        }
    }
    return 0;
}

// ---------------------------------------------------------
// 1. Logic for Length (similar to strlen)
// Count characters until we hit the null terminator '\0'
// ---------------------------------------------------------
int x_strlen(char str[]) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

// ---------------------------------------------------------
// 2. Logic for Copy (similar to strcpy)
// Copy char by char from src to dest until '\0' is found
// ---------------------------------------------------------
void x_strcpy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // IMPORTANT: Manually add the null terminator
}

// ---------------------------------------------------------
// 3. Logic for Concatenate (similar to strcat)
// Find the end of dest, then start copying src there
// ---------------------------------------------------------
void x_strcat(char dest[], char src[]) {
    int i = 0, j = 0;
    
    // Step 1: Skip to the end of dest
    while (dest[i] != '\0') {
        i++;
    }
    
    // Step 2: Copy src starting from that position
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0'; // Terminate the new string
}

// ---------------------------------------------------------
// 4. Logic for Compare (similar to strcmp)
// Check both strings char by char. If a mismatch is found,
// return the difference.
// ---------------------------------------------------------
int x_strcmp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] == str2[i]) {
        if (str1[i] == '\0') 
            return 0; // Both reached end successfully
        i++;
    }
    return (str1[i] - str2[i]); // Return ASCII difference
}

// ---------------------------------------------------------
// 5. Logic for Reverse (similar to strrev)
// Swap first char with last, second with second-last, etc.
// ---------------------------------------------------------
void x_strrev(char str[]) {
    int i = 0, len = 0;
    char temp;
    
    // Find length first
    len = x_strlen(str);
    
    // Swap loop (only go halfway)
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}