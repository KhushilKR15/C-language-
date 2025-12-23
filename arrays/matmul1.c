#include <stdio.h>
#include <stdlib.h>

int main() 
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