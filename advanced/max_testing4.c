#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function Declarations
int palindrome();
int odd_even();
int grade();
int sorting();
int odd_even_array();
int matrix_multiplication();
int factorial();
int fibonacci();
int patterns();
int string_tools();

int main() {
    int choice;

    while (1) {
        printf("\n--- MENU ---");
        printf("\n1. Palindrome");
        printf("\n2. Odd/Even (Single)");
        printf("\n3. Grade");
        printf("\n4. Sorting");
        printf("\n5. Odd/Even (Array)");
        printf("\n6. Matrix Multiplication");
        printf("\n7. Factorial");
        printf("\n8. Fibonacci");
        printf("\n9. Patterns & Armstrong");
        printf("\n10. String Library");
        printf("\n0. Exit");
        printf("\nChoose any one of the options: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: palindrome(); break;
            case 2: odd_even(); break;
            case 3: grade(); break;
            case 4: sorting(); break;
            case 5: odd_even_array(); break;
            case 6: matrix_multiplication(); break;
            case 7: factorial(); break;
            case 8: fibonacci(); break;
            case 9: patterns(); break;
            case 10: string_tools(); break;
            case 0: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}

// 1. Palindrome
int palindrome() {
    char str[100], copy[100];
    printf("ENTER YOUR NUMBER OR WORD: ");
    scanf("%s", str);
    strcpy(copy, str);
    // strrev is not standard, manual reverse used for compatibility
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) 
    {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    printf("\nORIGINAL: %s", copy);
    printf("\nREVERSED: %s", str);
    if (strcmp(copy, str) == 0) printf("\nTHE GIVEN INPUT IS A PALINDROME\n");
    else printf("\nTHE GIVEN INPUT IS NOT A PALINDROME\n");
    return 0;
}
// 2. Odd Even (Single)
int odd_even() 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0) printf("%d is even.\n", num);
    else printf("%d is odd.\n", num);
    return 0;
}
// 3. Grade
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
// 4. Sorting
int sorting() 
{
    int n = 5, i, j, temp;
    int arr[] = {64, 34, 25, 12, 22};
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Bubble Sorted: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
// 5. Odd Even (Array)
int odd_even_array() 
{
    int n, i, even = 0, odd = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) even++; else odd++;
    }
    printf("Total Even: %d, Total Odd: %d\n", even, odd);
    return 0;
}
// 6. Matrix Multiplication
int matrix_multiplication() 
{
    int r1, c1, r2, c2, i, j, k;
    int a[10][10], b[10][10], result[10][10];
    printf("Matrix A (r c): "); scanf("%d %d", &r1, &c1);
    printf("Matrix B (r c): "); scanf("%d %d", &r2, &c2);
    if (c1 != r2) 
    { 
        printf("Not possible.\n"); return 0; 
    }
    printf("Enter A:\n");
    for (i=0; i<r1; i++) for (j=0; j<c1; j++) scanf("%d", &a[i][j]);
    printf("Enter B:\n");
    for (i=0; i<r2; i++) for (j=0; j<c2; j++) scanf("%d", &b[i][j]);
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            result[i][j] = 0;
            for (k = 0; k < c1; k++) result[i][j] += a[i][k] * b[k][j];
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// 7. Factorial
int factorial() 
{
    int n; unsigned long long f = 1;
    printf("Enter number: "); scanf("%d", &n);
    if (n < 0) printf("Undefined.\n");
    else {
        for (int i = 1; i <= n; i++) f *= i;
        printf("Factorial: %llu\n", f);
    }
    return 0;
}
// 8. Fibonacci
int fibonacci() 
{
    int n, t1 = 0, t2 = 1, next;
    printf("Terms: "); scanf("%d", &n);
    printf("Series: %d, %d", t1, t2);
    for (int i = 3; i <= n; i++) 
    {
        next = t1 + t2; printf(", %d", next);
        t1 = t2; t2 = next;
    }
    return 0;
}
// 9. Patterns
int patterns() 
{
    int choice, size, i, j;
    char customChar;
    printf("1. Triangle 2. Square\nChoice: ");
    scanf("%d", &choice);
    printf("Size and Char: ");
    scanf("%d %c", &size, &customChar);
    if (choice == 1) 
    {
        for (i = 1; i <= size; i++) 
        {
            for (j = 1; j <= i; j++) printf("%c ", customChar);
            printf("\n");
        }
    } else {
        for (i = 1; i <= size; i++) 
        {
            for (j = 1; j <= size; j++) printf("%c ", customChar);
            printf("\n");
        }
    }
    return 0;
}
// 10. String Tools
int string_tools() 
{
    char str1[100];
    printf("Enter string: ");
    scanf("%s", str1);
    printf("Length: %d\n", (int)strlen(str1));
    return 0;
}