#include <stdio.h>
#include <string.h>
typedef struct 
{
    int id;
    char title[100]; 
    char type[50];
    float price;
} Book;

int main() 
{
    int n, i, choice;
    int searchId;
    char searchName[100];
    int found = 0;
    printf("How many books do you want to enter? (Max 100) ");
    scanf("%d", &n);
    Book books[100];
    printf("\n--- Enter Book Details ---\n");
    for (i = 0; i < n; i++) 
    {
        printf("\n---Book =%d---\n", i + 1);
        printf("Enter Book ID: ");
        scanf("%d", &books[i].id);
        printf("Enter Book Title: ");
        scanf(" %[^\n]", books[i].title); 
        printf("Enter Book Type (e.g., Fictional, Romance): ");
        scanf(" %[^\n]", books[i].type);
        printf("Enter Price: ");
        scanf("%f", &books[i].price);
    }
    printf("\n--------------------------------\n");
    printf("Search Options:\n");
    printf("1. Find by ID\n");
    printf("2. Find by Title\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    if (choice == 1) 
    {
        printf("Enter the Book ID to search: ");
        scanf("%d", &searchId);

        for (i = 0; i < n; i++) 
        {
            if (books[i].id == searchId) 
            {
                printf("\n--- Book Found ---\n");
                printf("ID:    %d\n", books[i].id);
                printf("Title: %s\n", books[i].title);
                printf("Type:  %s\n", books[i].type);
                printf("Price: %.2f\n", books[i].price);
                found = 1;
                break;
            }
        }
    } else if (choice == 2) 
    {
        printf("Enter the Book Title to search: ");
        scanf(" %[^\n]", searchName);

        for (i = 0; i < n; i++) {
            if (strcmp(books[i].title, searchName) == 0) 
            {
                printf("\n--- Book Found ---\n");
                printf("ID:    %d\n", books[i].id);
                printf("Title: %s\n", books[i].title);
                printf("Type:  %s\n", books[i].type);
                printf("Price: %.2f\n", books[i].price);
                found = 1;
                break; 
            }
        }
    } else 
    {
        printf("Invalid choice!\n");
        return 1;
    }

    if (!found) 
    {
        printf("\nSorry, book not found in the list.\n");
    }

    return 0;
}