#include <stdio.h>
int main()
{
    double d[2][2] = 
    {
        {1.1, 2.2}, {3.3, 4.4}
    };
    double *ptr = &d[0][0];
    printf("Address of d[0][0] = %u\n", ptr);
    printf("Address of d[0][1] (ptr + 1) = %u\n", ptr + 1);
    printf("d[1][0] using mixed syntax = %.1f\n", *(d[0] + 2));
    printf("d[1][1] using pointer logic = %.1f\n", *(*(d + 1) + 1));
    return 0;
}