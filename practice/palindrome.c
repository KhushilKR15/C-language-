/*this is a program for pinding if a given number is palindrome or not*/


#include <stdio.h>

int main() {
    int a, b, c, d = 0;

    printf("ENTER YOUR NUMBER : ");
    scanf("%d", &a);

    b = a;

    while (b != 0) {
        c = b % 10;
        d = d * 10 + c;
        b = b / 10;
    }

    printf("\nREVERSE OF %d IS %d\n", a, d);

    if (a == d) {
        printf("\nTHE GIVEN NUMBER IS PALINDROME\n");
    } else {
        printf("\nTHE GIVEN NUMBER IS NOT PALINDROME\n");
    }

    return 0;
}