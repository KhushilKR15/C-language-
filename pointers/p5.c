#include <stdio.h>
int main()
{
int age = 25;
int *ptr = &age;
printf("=== Dereference Operator (*) ===\n");
printf("age variable: %d\n", age);
printf("Address of age: %p\n", &age);
printf("Pointer stores: %p\n", ptr);
printf("\nDereferencing the pointer:\n");
printf("*ptr (dereference): %d\n", *ptr);
printf("\nWhat happened?\n");
printf("ptr contains address: %p\n", ptr);
printf("At that address, the value is: %d\n", *ptr);
return 0;
}