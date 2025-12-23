#include <stdio.h>
struct Book 
{
    char title[50];
    char author[50];
    float price;
};
int main() {
    struct Book library[3];
    int i;
    for(i = 0; i < 3; i++) 
    {
        printf("Enter title, author, and price for book %d:\n", i+1);
        scanf("%s %s %f", library[i].title, library[i].author, &library[i].price);
    }
    printf("\nLibrary Inventory\n");
    for(i = 0; i < 3; i++) 
    {
        printf("Book %d: %s by %s (%.2frs)\n", i+1, library[i].title, library[i].author, library[i].price);
    }
    return 0;
}