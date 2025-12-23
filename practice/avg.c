#include <stdio.h>
#include <math.h>  
#define     N   3
 int main()
{
    int count;
    float sum, average, number;
    sum  = 0 ;       
    count  = 0 ;       
while( count < 3)
 {
    scanf("%f", &number) ;
    sum = sum + number ;
    count =+ 1 ;
 }
    average = sum/N ;
    printf("N = %d Sum = %f", N, sum);
    printf(" Average = %f", average);
 return 0;
 }