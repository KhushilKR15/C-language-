#include <stdio.h>
//ai
union Converter 
{
    int num;
    char bytes[4];
};
int main() 
{
    union Converter c;
    c.num = 300;
    printf("Integer value: %d\n", c.num);
    printf("Byte 0: %d\n", c.bytes[0]);
    printf("Byte 1: %d\n", c.bytes[1]);
    return 0;
}