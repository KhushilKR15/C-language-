#include <stdio.h>

int main() {
    int choice, size, i, j, num = 1;
    char customChar;
    char ch;

    printf("Pattern Designer\n");
    printf("Choose a pattern:\n");
    printf("1.Right-Angled Triangle\n");
    printf("2.Square\n");
    printf("3.Pyramid\n");
    printf("4.Number Pyramid\n");
    printf("5.Floyd's Triangle\n");
    printf("6.Alphabet Pyramid\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    printf("Enter the size of the pattern: ");
    scanf("%d", &size);

    if (choice >= 1 && choice <= 3) {
        printf("Enter the character for making pattern: ");
        scanf(" %c", &customChar);
    }

    printf("\n--- Your Pattern ---\n\n");

    switch (choice) {
        case 1:
            for (i = 1; i <= size; i++) 
            {
                for (j = 1; j <= i; j++) 
                {
                    printf("%c ", customChar);
                }
                printf("\n");
            }
            break;

        case 2:
            for (i = 1; i <= size; i++) 
            {
                for (j = 1; j <= size; j++)
                {
                    printf("%c ", customChar);
                }
                printf("\n");
            }
            break;

        case 3:
            for (i = 1; i <= size; i++) {
                for (j = 1; j <= size - i; j++) 
                {
                    printf("  ");
                }
                for (j = 1; j <= (2 * i - 1); j++) 
                {
                    printf("%c ", customChar);
                }
                printf("\n");
            }
            break;

        case 4:
            for (i = 1; i <= size; i++) 
            {
                for (j = 1; j <= size - i; j++) 
                {
                    printf("  ");
                }
                for (j = 1; j <= i; j++) 
                {
                    printf("%d ", j);
                }
                printf("\n");
            }
            break;

        case 5:
            num = 1;
            for (i = 1; i <= size; i++) 
            {
                for (j = 1; j <= i; j++) 
                {
                    printf("%d ", num);
                    num++;
                }
                printf("\n");
            }
            break;

        case 6:
            for (i = 1; i <= size; i++) 
            {
                ch = 'A';
                for (j = 1; j <= size - i; j++) 
                {
                    printf("  ");
                }
                for (j = 1; j <= (2 * i - 1); j++) 
                {
                    printf("%c ", ch);
                    ch++;
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice try again\n");
    }

    return 0;
}