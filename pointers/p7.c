#include<stdio.h>
int main()
{
    int a,b,c;
    int *p1,*p2,*p3;
    printf("enter the value of a: ");
    scanf("%d\n",&a);
    printf("enter the value of b: ");
    scanf("%d\n",&b);
    printf("enter the value of c: ");
    scanf("%d\n",&c);
    p1=&a;
    p2=&b;
    p3=&c;
    printf("the answer with c : %d\n",c);
    printf("the answer with &c: %p\n",&c);
    printf("the answer with p3: %p\n",p3);
    printf("the answer with *p3: %d\n",*p3);

    printf("the answer with b : %d\n",a);
    printf("the answer with &b: %d\n",&a);
    printf("the answer with p3: %d\n",p1);
    printf("the answer with *p3: %d\n",*p1);

    printf("the answer with c : %d\n",b);
    printf("the answer with &c: %d\n",&b);
    printf("the answer with p3: %d\n",p2);
    printf("the answer with *p3: %d\n",*p2);

}