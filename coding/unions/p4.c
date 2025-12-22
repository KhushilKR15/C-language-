#include <stdio.h>
union Packet 
{
    int id;
    char data[4];
};
int main() 
{
    union Packet p;
    union Packet *ptr = &p;
    int a;
    printf("enter a number to access it's ascii value through a pointer\n");
    scanf("%d",&a);
    ptr->id = a;
    printf("Accessed via pointer (ID): %d\n", ptr->id);
    printf("Accessed via pointer (Char): %c\n", ptr->data[0]);
    return 0;
}
