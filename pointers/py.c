#include <stdio.h>
int main() 
{
    int a[3][3] = 
    {
        {10, 20, 30},{40, 50, 60},{70, 80, 90}
    };
    int *p;
    p = a[0];
    int choice;
    printf("      POINTER & ARRAY      \n");
    printf("What would you like to undertand and see?\n\n");
    printf("1.The Value of 'a' \n");
    printf("2.The Address of 'a'\n");
    printf("3.The Value of 'p' \n");
    printf("4.The Address of 'p'\n");
    printf("5.The Value pointed to by 'p'\n");
    printf("\nEnter your choice from 1 to 5: ");
    scanf("%d", &choice);
    switch (choice) 
    {
        case 1:
            printf("Base address of the array i.e. row 0\n");
            printf("used syntax here a\n");
            printf("therefore output : %p\n", *a);
            break;
        case 2:
            printf("Address of the entire array which is there \n");
            printf("used syntax here &a\n");
            printf("therefore output : %p\n",*&a);
            break;
        case 3:
            printf("Address held inside pointer p points to the value it self\n");
            printf("used syntax here p\n");
            printf("therefore output : %p\n", *p);
            break;
        case 4:
            printf("The memory location where variable 'p' itself lives in it \n");
            printf("used syntax here &p\n");
            printf("therefore output : %p\n", *&p);
            break;
        case 5:
            printf("DESCRIPTION : The actual integer value p is pointing at\n");
            printf("used syntax here *p\n");
            printf("therefore output : %d\n", *p);
            break;
        default:
            printf("Invalid choice! TRY AGAIN!!!\n");
    }
    return 0;
}