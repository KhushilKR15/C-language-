#include <stdio.h>

int main()
{
    int choice, size, i, j, num = 1;
    char customChar;
//armstrong variables as it is to be understandable differently from others
    int originalNum, remainder, result = 0, digits = 0, temp;
    int powerVal, k;

    printf("Pattern Design & Number Tools\n");
    printf("Choose option:\n");
    printf("1. Right Angled Triangle\n");
    printf("2. Square\n");
    printf("3. Pyramid\n");
    printf("4. Number Triangle\n");
    printf("5. Floyd's Triangle\n");
    printf("6. Alphabet Pyramid\n");
    printf("7. Hollow Square\n");
    printf("8. Diamond\n");
    printf("9. Reverse Pyramid\n");
    printf("10. Check Armstrong Number\n");
    printf("Enter your choice (1-10): ");
    scanf("%d", &choice);
    if (choice >= 1 && choice <= 9) {
        printf("Enter the size of pattern: ");
        scanf("%d", &size);
    }
    if ((choice >= 1 && choice <= 3) || choice == 7 || choice == 8 || choice == 9)
    {
        printf("Enter character for making pattern: ");
        scanf(" %c", &customChar); 
    }

    if (choice == 10) {
        printf("Enter an integer to check: ");
        scanf("%d", &originalNum);
    }

    printf("\n--- Result ---\n\n");

    
    if (choice == 1) // Right Angled Triangle
    {
        for (i = 1; i <= size; i++) {
            for (j = 1; j <= i; j++) printf("%c ", customChar);
            printf("\n");
        }
    } 
    else if (choice == 2) // Square
    {
        for (i = 1; i <= size; i++) {
            for (j = 1; j <= size; j++) printf("%c ", customChar);
            printf("\n");
        }
    } 
    else if (choice == 3) // Pyramid
    {
        for (i = 1; i <= size; i++) {
            for (j = 1; j <= size - i; j++) printf(" ");
            for (j = 1; j <= (2 * i - 1); j++) printf("%c ", customChar);
            printf("\n");
        }
    } 
    else if (choice == 4) // Number Triangle
    {
        for (i = 1; i <= size; i++) {
            for (j = 1; j <= size - i; j++) printf(" ");
            for (j = 1; j <= i; j++) printf("%d ", j);
            printf("\n");
        }
    } 
    else if (choice == 5) // Floyd's Triangle
    {
        num = 1;
        for (i = 1; i <= size; i++) {
            for (j = 1; j <= i; j++) {
                printf("%d ", num);
                num++;
            }
            printf("\n");
        }
    } 
    else if (choice == 6) // Alphabet Pyramid
    {
        for (i = 1; i <= size; i++) {
            char ch = 'A';
            for (j = 1; j <= size - 1; j++) printf(" ");
            for (j = 1; j <= (2 * i - 1); j++) {
                printf("%c ", ch);
                ch++;
            }
            printf("\n");
        }
    } 
    else if (choice == 7) // Hollow Square
    {
        for (i = 1; i <= size; i++) {
            for (j = 1; j <= size; j++) {
                if (i == 1 || i == size || j == 1 || j == size)
                    printf("%c ", customChar);
                else
                    printf("  ");
            }
            printf("\n");
        }
    } 
    else if (choice == 8) // Diamond
    {
        // Upper
        for (i = 1; i <= size; i++) {
            for (j = 1; j <= size - i; j++) printf(" ");
            for (j = 1; j <= (2 * i - 1); j++) printf("%c ", customChar);
            printf("\n");
        }
        // Lower
        for (i = size - 1; i >= 1; i--) {
            for (j = 1; j <= size - i; j++) printf(" ");
            for (j = 1; j <= (2 * i - 1); j++) printf("%c ", customChar);
            printf("\n");
        }
    } 
    else if (choice == 9) // Reverse Pyramid
    {
        for (i = size; i >= 1; i--) {
            for (j = 1; j <= size - i; j++) printf(" ");
            for (j = 1; j <= (2 * i - 1); j++) printf("%c ", customChar);
            printf("\n");
        }
    }
    else if (choice == 10) // Armstrong Number Logic
    {
        temp = originalNum;

        // Step 1: Count number of digits
        while (temp != 0) {
            temp /= 10;
            digits++;
        }

        temp = originalNum;

        // Step 2: Calculate sum of powers
        while (temp != 0) {
            remainder = temp % 10;
            
            // Calculate power manually to avoid <math.h> dependency
            powerVal = 1;
            for(k = 0; k < digits; k++) {
                powerVal = powerVal * remainder;
            }
            
            result += powerVal;
            temp /= 10;
        }
        if (result == originalNum)
            printf("%d IS an Armstrong number.\n", originalNum);
        else
            printf("%d is NOT an Armstrong number.\n", originalNum);
    }
    else
    {
        printf("Invalid choice. Retry\n");
    }

    return 0;
}