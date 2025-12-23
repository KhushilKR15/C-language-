#include<stdio.h>
struct price
{
unsigned k:4;
unsigned int h:13;
}P;
int main()
{
printf("%d",sizeof(P));
return 0;
}