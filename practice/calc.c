/*this is a program for finding the sum of 2 numbers entered
*/

#include<stdio.h>
int main()
{
    int a,w,x,y,z;
    printf("the produt of sum and difference of 2 numbers");
    printf("\nenter value of x ");
    scanf(" %d",&x);
    printf("\nenter value of y ");
    scanf(" %d",&y);
    w=(x+y);
    z=(x-y);
    a=w*z;
    printf("the produt of sum and difference of %d & %d is %d",x,y,a);

}