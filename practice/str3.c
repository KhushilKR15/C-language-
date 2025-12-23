#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int i = 0, x = 0;

    printf("Enter 1st string: ");
    scanf("%s", s1);
    printf("Enter 2nd string: ");
    scanf("%s", s2);

    while(s1[i] != '\0' || s2[i] != '\0') {
        if(s1[i] != s2[i]) {
            x = 1;
            break;
        }
        i++;
    }

    if(x == 0)
        printf("Strings entered are Same.\n");
    else
        printf("Strings enteered are Not Same.\n");

    return 0;
}