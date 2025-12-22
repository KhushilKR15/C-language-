#include <stdio.h>
struct Struct 
{
    int x;
    char y;
    double z;
};

union Union {
    int x;
    char y;
    double z;
};

int main() {
    printf("Size of int: %lu, char: %lu, double: %lu\n", sizeof(int), sizeof(char), sizeof(double));
    printf("Size of Struct: %lu bytes\n", sizeof(struct Struct)); 
    printf("Size of Union: %lu bytes\n", sizeof(union Union));  
    return 0;
}