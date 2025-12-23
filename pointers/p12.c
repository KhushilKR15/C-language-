#include<stdio.h>
#include<string.h>
union Test
{
char st[12];
int p;
};
int main()
{
union Test T4,T2;
strcpy(T4.st,"C-Program");
T2=T4;
T4.st[0]='Z';
printf("%s %s\n",T4.st,T2.st);
printf("%d",sizeof(union Test));
return 0;
}