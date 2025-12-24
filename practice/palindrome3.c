#include <stdio.h>
#include <string.h>

int main() {
    char str[100], copy[100];

    printf("ENTER YOUR NUMBER OR WORD: ");
    scanf("%s", str);

    strcpy(copy, str);

    strrev(str);

    printf("\nORIGINAL: %s", copy);
    printf("\nREVERSED: %s", str);

    if (strcmp(copy, str) == 0) {
        printf("\n\nTHE GIVEN INPUT IS A PALINDROME\n");
    } else {
        printf("\n\nTHE GIVEN INPUT IS NOT A PALINDROME\n");
    }

    return 0;
}