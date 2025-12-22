#include<stdio.h>
int main()
{
    int c=0;
    char a[100],b[100];
    printf("here we will copy a string from one to another:\n");
    printf("enter the string1:\n");
    scanf("%s",a[100]);
    while (a[c]!='\0')
    {
        b[c]=a[c];
        c++;
    }
    b[c]='\0';
    printf("the copied string is : %s",b[100]);

}