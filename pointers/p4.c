# include <stdio.h>
int main()
{
int age = 25 ;
int *ptr; 
ptr = &age;
printf("=== Pointer Basics ===\n");
printf("Variable age value: %d\n", age);
printf("Address of age (&age): %p\n", &age);
printf("Address stored in ptr_to_age: %p\n", ptr);
printf("\nAre they the same? YES!\n");
printf("&age and ptr_to_age both hold: %p\n", ptr);
return 0;
}