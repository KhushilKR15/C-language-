#include <stdio.h>
int main() 
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