/*this is a program about simple interest */
#include <stdio.h>
#include <math.h>
int main()
{
 int year, period ;
 float amount, inrate, value ;
 printf("Input amount, interest rate, and period\n\n") ;
 scanf ("%f %f %d", &amount, &inrate, &period) ;
 printf("\n") ;
 year = 1 ;
 while( year <= period )
 {
 value = (amount  + amount*inrate*year) ;
 printf("%2d Rs %.2f\n", year, value) ;
// amount = value ;
 year = year + 1 ;
 }
 return 0; 
 }

