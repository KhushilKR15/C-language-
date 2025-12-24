#include <stdio.h>
#include <string.h>

int main() {
    int num;
    char str[20], reverse_str[20];
    int length, i;

    printf("ENTER YOUR NUMBER : ");
    scanf("%d", &num);

    printf(str, "%d", num);
    
    length = strlen(str);


    for (i = 0; i < length; i++) {
        reverse_str[i] = str[length - i - 1];
    }
    reverse_str[length] = '\0';

    printf("\nREVERSE OF %s IS %s\n", str, reverse_str);

    if (strcmp(str, reverse_str) == 0) {
        printf("\nTHE GIVEN NUMBER IS PALINDROME\n");
    } else {
        printf("\nTHE GIVEN NUMBER IS NOT PALINDROME\n");
    }

    return 0;
}