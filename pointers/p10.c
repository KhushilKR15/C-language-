#include <stdio.h>
void foo(int*);
int main()
{
int a[6]={16,24,73,97,60,87}, *p = a;
foo(p++);
foo(++p);
}
void foo(int *p)
{
printf("%d\n", p[2]);
}