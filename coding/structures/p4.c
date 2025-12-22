#include <stdio.h>

struct Rec 
{
    int length;
    int width;
};
void doubleDimensions(struct Rec *r) 
{
    r->length *= 2;
    r->width *= 2;
}
int main() 
{
    struct Rec r1 = {10, 5};
    struct Rec *ptr = &r1;
    printf("Original: %d x %d\n", ptr->length, ptr->width);
    doubleDimensions(ptr);
    printf("Doubled: %d x %d\n", ptr->length, ptr->width);
    return 0;
}