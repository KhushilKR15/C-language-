#include <stdio.h>
int main() {
char *arr[] = {"Hello", "World", "C", "Programming"};
char **ptr = arr;
printf("%s\n", *(ptr + 1));
printf("%s\n", *(ptr + 2));
return 0;
}