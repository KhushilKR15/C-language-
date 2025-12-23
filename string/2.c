#include <stdio.h>
#include <string.h> // This library contains strlen, strcpy, strcat, etc.

int main() {
    int choice;
    char str1[100], str2[100], result[200];
    int length, cmp;

    while(1) {
        printf("\n\n--- STRING LIBRARY MENU ---");
        printf("\n1. Find Length (strlen)");
        printf("\n2. Copy String (strcpy)");
        printf("\n3. Concatenate Strings (strcat)");
        printf("\n4. Compare Strings (strcmp)");
        printf("\n5. Reverse String (strrev)");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        // Clear the input buffer to prevent skipping inputs
        while ((getchar()) != '\n'); 

        switch(choice) {
            case 1: // LENGTH
                printf("Enter a string: ");
                scanf("%[^\n]s", str1); // Reads string with spaces
                
                length = strlen(str1); // Returns the count of characters
                printf("Length: %d", length);
                break;

            case 2: // COPY
                printf("Enter source string: ");
                scanf("%[^\n]s", str1);
                
                strcpy(result, str1); // Copies content of str1 into result
                printf("Copied string: %s", result);
                break;

            case 3: // CONCATENATE
                printf("Enter first string: ");
                scanf("%[^\n]s", str1);
                while ((getchar()) != '\n'); // Clean buffer
                printf("Enter second string: ");
                scanf("%[^\n]s", str2);
                
                strcpy(result, str1); // Start with the first string
                strcat(result, str2); // Append the second string to the end
                printf("Concatenated string: %s", result);
                break;

            case 4: // COMPARE
                printf("Enter first string: ");
                scanf("%[^\n]s", str1);
                while ((getchar()) != '\n');
                printf("Enter second string: ");
                scanf("%[^\n]s", str2);
                
                cmp = strcmp(str1, str2); // Returns 0, positive, or negative
                
                if (cmp == 0)
                    printf("Strings are EXACTLY equal.");
                else if (cmp > 0)
                    printf("String 1 is greater (ASCII value).");
                else
                    printf("String 2 is greater (ASCII value).");
                break;

            case 5: // REVERSE
                printf("Enter a string: ");
                scanf("%[^\n]s", str1);
                
                strrev(str1); // Reverses the string in place
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