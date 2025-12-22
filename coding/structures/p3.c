#include <stdio.h>
struct Date 
{
    int day;
    int month;
    int year;
};
struct Student 
{
    char name[50];
    int roll_no;
    struct Date dob;
};
int main() 
{
    struct Student 
    s1 ={
            "John", 25, {15, 8, 2002}
        };
    printf("Student: %s\n", s1.name);
    printf("Date of Birth: %d-%d-%d\n", s1.dob.day, s1.dob.month, s1.dob.year);
    return 0;
}