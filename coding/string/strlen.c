#include <stdio.h>
int main ()
{
    int b=0;
    char a[100];
    printf("enter the string(max:100):\n");
    scanf("%c",&a);
    printf("THE LENGTH OF THE STRING ENTERED IS :\n");
    while(a[b]!='\0')
    {
        b++;
    }
    printf("%d",b);

}