#include<stdio.h>
void main()
{
int a[20]={11,12,13,14,15},i=1,j=2;
static int k;
printf("%d\n",*(a + 1+ i));
printf("%d\n",*(a + *(a + 1)));
printf ("%d\n",*(a+ i/j));
printf("%d\n",*(a + (k + 1)));
printf("%d\n",*(a + i) + *(a +j));
printf ("%d\n",*(a+ i*j));
}