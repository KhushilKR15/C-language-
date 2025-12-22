#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int main()
{
    int mainChoice;
    
    printf("choose anyone of the following: ");
    printf("\n1.PATTERNS \n2.MATRIX ADDITION \n3.MATRIX MULTIPLICATION \n4.POINTERS \n ");
    scanf("%d", &mainChoice);

    if (mainChoice == 1)
    {
        int pChoice, size, i, j, num = 1;
        char customChar;
        int originalNum, remainder, result = 0, digits = 0, temp;
        int powerVal, k;

        printf("Pattern Design & Number Tools\n");
        printf("Choose option:\n");
        printf("1. Right Angled Triangle\n2. Square\n3. Pyramid\n4. Number Triangle\n5. Floyd's Triangle\n6. Alphabet Pyramid\n7. Hollow Square\n8. Diamond\n9. Reverse Pyramid\n10. Check Armstrong Number\n");
        printf("Enter your choice (1-10): ");
        scanf("%d", &pChoice);

        if (pChoice >= 1 && pChoice <= 9) {
            printf("Enter the size of pattern: ");
            scanf("%d", &size);
        }

        if ((pChoice >= 1 && pChoice <= 3) || pChoice == 7 || pChoice == 8 || pChoice == 9) {
            printf("Enter character for making pattern: ");
            scanf(" %c", &customChar);
        }

        if (pChoice == 10) {
            printf("Enter an integer to check: ");
            scanf("%d", &originalNum);
        }

        printf("\n--- Result ---\n\n");

        if (pChoice == 1) {
            for (i = 1; i <= size; i++) {
                for (j = 1; j <= i; j++) printf("%c ", customChar);
                printf("\n");
            }
        } 
        else if (pChoice == 2) {
            for (i = 1; i <= size; i++) {
                for (j = 1; j <= size; j++) printf("%c ", customChar);
                printf("\n");
            }
        } 
        else if (pChoice == 3) {
            for (i = 1; i <= size; i++) {
                for (j = 1; j <= size - i; j++) printf(" ");
                for (j = 1; j <= (2 * i - 1); j++) printf("%c ", customChar);
                printf("\n");
            }
        } 
        else if (pChoice == 4) {
            for (i = 1; i <= size; i++) {
                for (j = 1; j <= size - i; j++) printf(" ");
                for (j = 1; j <= i; j++) printf("%d ", j);
                printf("\n");
            }
        } 
        else if (pChoice == 5) {
            num = 1;
            for (i = 1; i <= size; i++) {
                for (j = 1; j <= i; j++) {
                    printf("%d ", num);
                    num++;
                }
                printf("\n");
            }
        } 
        else if (pChoice == 6) {
            for (i = 1; i <= size; i++) {
                char ch = 'A';
                for (j = 1; j <= size - i; j++) printf(" ");
                for (j = 1; j <= (2 * i - 1); j++) {
                    printf("%c ", ch);
                    ch++;
                }
                printf("\n");
            }
        } 
        else if (pChoice == 7) {
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
        else if (pChoice == 8) {
            for (i = 1; i <= size; i++) {
                for (j = 1; j <= size - i; j++) printf(" ");
                for (j = 1; j <= (2 * i - 1); j++) printf("%c ", customChar);
                printf("\n");
            }
            for (i = size - 1; i >= 1; i--) {
                for (j = 1; j <= size - i; j++) printf(" ");
                for (j = 1; j <= (2 * i - 1); j++) printf("%c ", customChar);
                printf("\n");
            }
        } 
        else if (pChoice == 9) {
            for (i = size; i >= 1; i--) {
                for (j = 1; j <= size - i; j++) printf(" ");
                for (j = 1; j <= (2 * i - 1); j++) printf("%c ", customChar);
                printf("\n");
            }
        }
        else if (pChoice == 10) {
            temp = originalNum;
            while (temp != 0) {
                temp /= 10;
                digits++;
            }
            temp = originalNum;
            while (temp != 0) {
                remainder = temp % 10;
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
    }

    if (mainChoice == 2)
    {
        int a[10][10], b[10][10], c[10][10];
        int rows, cols, k, d;

        printf("Enter rows and columns: ");
        scanf("%d %d", &rows, &cols);
        
        printf("Enter elements of first matrix:\n");
        for (k = 0; k < rows; k++) {
            for (d = 0; d < cols; d++) {
                scanf("%d", &a[k][d]);
            }
        }

        printf("Enter elements of second matrix:\n");
        for (k = 0; k < rows; k++) {
            for (d = 0; d < cols; d++) {
                scanf("%d", &b[k][d]);
            }
        }

        for (k = 0; k < rows; k++) {
            for (d = 0; d < cols; d++) {
                c[k][d] = a[k][d] + b[k][d];
            }
        }

        printf("Sum of matrices:\n");
        for (k = 0; k < rows; k++) {
            for (d = 0; d < cols; d++) {
                printf("%d ", c[k][d]);
            }
            printf("\n");
        }
    }

    if (mainChoice == 3)
    {
        int r1, c1, r2, c2, i, j, k;
        int a[10][10], b[10][10], result[10][10];

        printf("Enter rows and columns for matrix A: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and columns for matrix B: ");
        scanf("%d %d", &r2, &c2);

        if (c1 != r2) {
            printf("\nMatrix multiplication not possible.\n");
            exit(0);
        }

        printf("\nEnter elements of matrix A:\n");
        for (i = 0; i < r1; ++i) {
            for (j = 0; j < c1; ++j) {
                scanf("%d", &a[i][j]);
            }
        }

        printf("\nEnter elements of matrix B:\n");
        for (i = 0; i < r2; ++i) {
            for (j = 0; j < c2; ++j) {
                scanf("%d", &b[i][j]);
            }
        }

        for (i = 0; i < r1; ++i) {
            for (j = 0; j < c2; ++j) {
                result[i][j] = 0;
                for (k = 0; k < c1; ++k) {
                    result[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("\nResultant Matrix:\n");
        for (i = 0; i < r1; ++i) {
            for (j = 0; j < c2; ++j) {
                printf("%d\t", result[i][j]);
            }
            printf("\n");
        }
    }

    if (mainChoice == 4)
    {
        int a[MAX_SIZE][MAX_SIZE];
        int rows, cols, i, j, *p, ptr_r, ptr_c, subChoice;

        printf("Enter rows and cols (max %d): ", MAX_SIZE);
        scanf("%d %d", &rows, &cols);

        if (rows > MAX_SIZE || cols > MAX_SIZE || rows < 1 || cols < 1) return 1;

        for(i = 0; i < rows; i++) {
            for(j = 0; j < cols; j++) {
                printf("Enter a[%d][%d]: ", i, j);
                scanf("%d", &a[i][j]);
            }
        }

        printf("\nEnter Row and Col index for pointer p: ");
        scanf("%d %d", &ptr_r, &ptr_c);
        
        p = &a[ptr_r][ptr_c];

        printf("\n1. Value of 'a'\n2. Address of 'a'\n3. Value in 'p'\n4. Address of 'p'\n5. Value pointed by 'p'\nChoice: ");
        scanf("%d", &subChoice);

        switch (subChoice) {
            case 1: printf("Output: %p\n", (void*)a); break;
            case 2: printf("Output: %p\n", (void*)&a); break;
            case 3: printf("Output: %p\n", (void*)p); break;
            case 4: printf("Output: %p\n", (void*)&p); break;
            case 5: printf("Output: %d\n", *p); break;
            default: printf("Invalid\n");
        }
    }

    return 0;
}