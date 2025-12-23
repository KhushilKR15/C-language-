#include <stdio.h>
int main ()
{
    printf("enter the number of enteries for the following problem:\n");
    int n;
    scanf("%d", &n);    
    int arr[n];
    printf("enter the numbers one by one:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("the maximum and minimum numbers among the entered numbers are:\n");
    int max = arr[0];
    int min = arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("maximum: %d\n", max);
    printf("minimum: %d\n", min);
    return 0;

}