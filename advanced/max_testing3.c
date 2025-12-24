#include <stdio.h>
int palindrome()
{
    char str[100], copy[100];

    printf("ENTER YOUR NUMBER OR WORD: ");
    scanf("%s", str);

    strcpy(copy, str);

    strrev(str);

    printf("\nORIGINAL: %s", copy);
    printf("\nREVERSED: %s", str);

    if (strcmp(copy, str) == 0) {
        printf("\n\nTHE GIVEN INPUT IS A PALINDROME\n");
    } else {
        printf("\n\nTHE GIVEN INPUT IS NOT A PALINDROME\n");
    }
    return 0;
}
int odd_even()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0) 
    {
        printf("%d is even.\n", num);
    } 
    else 
    {
        printf("%d is odd.\n", num);
    }

    return 0;
}
int grade()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks > 80) 
    {
        printf("Grade = a\n");
    } else if (marks > 60 && marks <= 80) 
    {
        printf("Grade = b\n");
    } else if (marks > 50 && marks <= 60) 
    {
        printf("Grade = c\n");
    } else if (marks > 40 && marks <= 50) 
    {
        printf("Grade = d\n");
    } else if (marks >= 35 && marks <= 40) 
    {
        printf("Grade = e\n");
    } else 
    {
        printf("Grade = F\n"); 
    }
    return 0;
}
int sorting ()
{
    int n = 5, i, j, temp;
    int arr[] = {64, 34, 25, 12, 22};
    for(i = 0; i < n-1; i++) 
    {
        for(j = 0; j < n-i-1; j++) 
        { 
            if(arr[j] > arr[j+1]) 
            {
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
int odd_even()
{
    int n, i, even = 0, odd = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(i=0; i<n; i++) 
    {
        scanf("%d", &arr[i]);        
        if(arr[i] % 2 == 0) 
        {
            even++;
        } else 
        {
            odd++;
        }
    }
    printf("Total Even numbers: %d\n", even);
    printf("Total Odd numbers: %d\n", odd);
    return 0;
}
int matrix_multiplication()
{
    int r1, c1, r2, c2, i, j, k;
    int a[10][10], b[10][10], result[10][10];
    printf("Enter rows and columns for first matrix A : ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix B : ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) 
    {
        printf("\nMatrix multiplication not possible.\n");
        printf("Column of first matrix %d not equal to Row of second matrix %d. Check again.\n", c1, r2);
        exit(0);
    }
    printf("\nEnter elements of matrix A:\n");
    for (i = 0; i < r1; ++i) 
    {
        for (j = 0; j < c1; ++j) 
        {
            printf("Enter element a %d %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter elements of matrix B :\n");
    for (i = 0; i < r2; ++i) 
    {
        for (j = 0; j < c2; ++j) 
        {
            printf("Enter element b %d %d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nMatrix A :\n");
    for (i = 0; i < r1; ++i) 
    {
        for (j = 0; j < c1; ++j) 
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B :\n");
    for (i = 0; i < r2; ++i) 
    {
        for (j = 0; j < c2; ++j) 
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) 
        {
            result[i][j] = 0;
        }
    }
    for (i = 0; i < r1; ++i) 
    {        
        for (j = 0; j < c2; ++j) 
        {
            for (k = 0; k < c1; ++k) 
            { 
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("\nResultant Matrix :\n");
    for (i = 0; i < r1; ++i) 
    {
        for (j = 0; j < c2; ++j) 
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int factorial ()
{
    int n;
    unsigned long long factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    } else 
    {
        for (int i = 1; i <= n; ++i) 
        {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }
    return 0;
}
int fibonacci()
{
    int n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d", t1, t2);
    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
int patterns()
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
    else
    {
        printf("Invalid choice. Retry\n");
    }
    return 0;
}
int string()
{
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
        while ((getchar()) != '\n'); 
        switch(choice) 
        {
            case 1: 
                printf("Enter a string: ");
                scanf("%[^\n]s", str1);
                length = strlen(str1);
                printf("Length: %d", length);
                break;

            case 2: 
                printf("Enter source string: ");
                scanf("%[^\n]s", str1);
                
                strcpy(result, str1);
                printf("Copied string: %s", result);
                break;

            case 3:
                printf("Enter first string: ");
                scanf("%[^\n]s", str1);
                while ((getchar()) != '\n'); 
                printf("Enter second string: ");
                scanf("%[^\n]s", str2);
                
                strcpy(result, str1);
                strcat(result, str2);
                printf("Concatenated string: %s", result);
                break;

            case 4:
                printf("Enter first string: ");
                scanf("%[^\n]s", str1);
                while ((getchar()) != '\n');
                printf("Enter second string: ");
                scanf("%[^\n]s", str2);
                
                cmp = strcmp(str1, str2);
                
                if (cmp == 0)
                    printf("Strings are EXACTLY equal.");
                else if (cmp > 0)
                    printf("String 1 is greater (ASCII value).");
                else
                    printf("String 2 is greater (ASCII value).");
                break;

            case 5:
                printf("Enter a string: ");
                scanf("%[^\n]s", str1);
                
                strrev(str1);
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
int main ()
{
    printf("chosse any one of the ");
}