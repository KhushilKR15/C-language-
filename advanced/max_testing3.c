#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void custom_strrev(char* str) 
{
    int i, j;
    char temp;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) 
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int palindrome() 
{
    char str[100], copy[100];
    printf("ENTER YOUR NUMBER OR WORD: ");
    scanf("%s", str);
    strcpy(copy, str);
    custom_strrev(str);
    printf("\nORIGINAL: %s", copy);
    printf("\nREVERSED: %s", str);
    if (strcmp(copy, str) == 0) 
    {
        printf("\n\nTHE GIVEN INPUT IS A PALINDROME\n");
    } else 
    {
        printf("\n\nTHE GIVEN INPUT IS NOT A PALINDROME\n");
    }
    return 0;
}

int odd_even() 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0) printf("%d is even.\n", num);
    else printf("%d is odd.\n", num);
    return 0;
}

int grade() 
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks > 80) printf("Grade = a\n");
    else if (marks > 60) printf("Grade = b\n");
    else if (marks > 50) printf("Grade = c\n");
    else if (marks > 40) printf("Grade = d\n");
    else if (marks >= 35) printf("Grade = e\n");
    else printf("Grade = F\n");
    return 0;
}

int sorting() 
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
    printf("\n");
    return 0;
}

int odd_even_array() 
{
    int n, i, even = 0, odd = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(i=0; i<n; i++) 
    {
        scanf("%d", &arr[i]);        
        if(arr[i] % 2 == 0) even++;
        else odd++;
    }
    printf("Total Even numbers: %d\n", even);
    printf("Total Odd numbers: %d\n", odd);
    return 0;
}

int matrix_multiplication() 
{
    int r1, c1, r2, c2, i, j, k;
    int a[10][10], b[10][10], result[10][10];
    
    printf("Enter rows and columns for matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for matrix B: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) 
    {
        printf("\nMatrix multiplication not possible!\n");
        return 0;
    }

    printf("Enter elements of matrix A:\n");
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c1; ++j)
            scanf("%d", &a[i][j]);

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < r2; ++i)
        for (j = 0; j < c2; ++j)
            scanf("%d", &b[i][j]);

    for (i = 0; i < r1; ++i) 
    {
        for (j = 0; j < c2; ++j) 
        {
            result[i][j] = 0;
            for (k = 0; k < c1; ++k)
                result[i][j] += a[i][k] * b[k][j];
        }
    }

    printf("\nResultant Matrix:\n");
    for (i = 0; i < r1; ++i) 
    {
        for (j = 0; j < c2; ++j) printf("%d\t", result[i][j]);
        printf("\n");
    }
    return 0;
}

int factorial() 
{
    int n;
    unsigned long long fact = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) printf("Factorial not defined for negative numbers.\n");
    else 
    {
        for (int i = 1; i <= n; ++i) fact *= i;
        printf("Factorial of %d = %llu\n", n, fact);
    }
    return 0;
}

int fibonacci() 
{
    int n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d", t1, t2);
    for (int i = 3; i <= n; ++i) 
    {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
    return 0;
}

int patterns() 
{
    int choice, size, i, j, num = 1;
    char customChar = '*';
    int originalNum, remainder, result = 0, digits = 0, temp, powerVal, k;

    printf("\n1. Triangle\n2. Square\n3. Pyramid\n10. Armstrong\nEnter choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 9) 
    {
        printf("Enter size: ");
        scanf("%d", &size);
        printf("Enter character: ");
        scanf(" %c", &customChar);
    }

    if (choice == 1) 
    { // Triangle
        for (i = 1; i <= size; i++) 
        {
            for (j = 1; j <= i; j++) printf("%c ", customChar);
            printf("\n");
        }
    } 
    else if (choice == 10) 
    { // Armstrong
        printf("Enter number: ");
        scanf("%d", &originalNum);
        temp = originalNum;
        while (temp != 0) 
        {
            temp /= 10; digits++; 
        }
        temp = originalNum;
        while (temp != 0) 
        {
            remainder = temp % 10;
            powerVal = 1;
            for(k = 0; k < digits; k++) powerVal *= remainder;
            result += powerVal;
            temp /= 10;
        }
        if (result == originalNum) printf("Is Armstrong.\n");
        else printf("Not Armstrong.\n");
    }
    return 0;
}

int string_tools() 
{
    int choice;
    char str1[100], str2[100], result[200];
    while(1) 
    {
        printf("\n1. Length\n2. Copy\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        getchar(); // consume newline
        if(choice == 3) break;
        printf("Enter string: ");
        fgets(str1, 100, stdin);
        str1[strcspn(str1, "\n")] = 0; // remove newline

        if(choice == 1) printf("Length: %lu\n", strlen(str1));
        else if(choice == 2) 
        {
            strcpy(result, str1);
            printf("Copied: %s\n", result);
        }
    }
    return 0;
}

int main() 
{
    int choice;
    while (1) 
    {
        printf("\n--- MAIN MENU ---\n1. Palindrome\n2. Odd/Even\n4. Sorting\n5. Array Odd/Even\n6. Matrix\n7. Factorial\n8. Fibonacci\n9. Patterns\n10. String\n0. Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) 
        break;
        switch (choice) 
        {
            case 1: palindrome(); 
            break;
            case 2: odd_even(); 
            break;
            case 4: sorting(); 
            break;
            case 5: odd_even_array(); 
            break;
            case 6: matrix_multiplication(); 
            break;
            case 7: factorial(); 
            break;
            case 8: fibonacci(); 
            break;
            case 9: patterns(); 
            break;
            case 10: string_tools(); 
            break;
            case 0: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}