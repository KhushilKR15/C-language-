# include <stdio.h>
int main ()
{
int age =25;
printf(" Understanding the & \n");
printf("Variable: age\n");
printf("Value: %d\n", age);
printf("Address for age: %p\n", &age);
printf("\n In memory: \n");
printf("Address contains value: %d\n", age);
return 0;
}