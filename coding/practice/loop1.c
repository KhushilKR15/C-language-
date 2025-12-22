/*basic pattern printing*/
#include <stdio.h>

int main() {
    int a,i,j,k,r;
    printf("enter value of number");
    scanf("%d",&a);
    for (i = 1; i <= a; i++) {
        for (j = 1; j <= a - i; j++) {
            printf("*");
        }

        for (k = 1; k <= i; k++) {
            printf(" ");
        }
        
        printf("\n");
    }

    return 0;
}
