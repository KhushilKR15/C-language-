#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;
    int isPalindrome = 1;

    printf("ENTER YOUR NUMBER OR WORD: ");
    scanf("%s", str);
    length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0; 
            break;
        }
    }

    printf("\nINPUT: %s", str);

    if (isPalindrome) {
        printf("\nTHE GIVEN INPUT IS A PALINDROME\n");
    } else {
        printf("\nTHE GIVEN INPUT IS NOT A PALINDROME\n");
    }

    return 0;
}