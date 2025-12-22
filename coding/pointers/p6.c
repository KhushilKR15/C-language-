#include <stdio.h>
int main()
{
    int a=10;
    int *p;
    p = &a;
    printf("the answer when we print a: %d\n",a );
    printf("the answer when we print p: %p\n",p );
    printf("the answer when we print *p: %d\n",*p );
    printf("the answer when we print &a: %p\n",&a );
}