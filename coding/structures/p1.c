#include <stdio.h>
#include <string.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee emp1 = {101, "Alice", 55000.50};
    printf("ID: %d\n", emp1.id);
    printf("Name: %s\n", emp1.name);
    emp1.salary += 5000; 
    printf("New Salary: %.2f\n", emp1.salary);
    return 0;
}