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
    printf("Choose Address Output Format:\n");
    printf("1. Integer format (%%d)\n");
    printf("2. Unsigned Integer format (%%u)\n");
    printf("3. Pointer Address format (%%p)\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    printf("\n");
    printf("RESULT");

    if (choice == 1) {
        //Using %d
        
        printf("a           = %d   (address of row 0)\n", (int)a);
        printf("&a[0]       = %d   (address of row 0)\n", (int)&a[0]);
        printf("&a[0][0]    = %d   (address of first element)\n\n", (int)&a[0][0]);

        // Values as %d is value not address
        printf("*(p)        = %d   (first element)\n", *p);
        printf("*(p+1)      = %d   (next element)\n", *(p+1));
        printf("*(p+2)      = %d   (next element)\n", *(p+2));
        printf("*(p+3)      = %d   (next row)\n\n", *(p+3));

        //for address of %d
        printf("a + 1       = %d   (address of row 1)\n", (int)(a + 1));
        printf("*(a + 1)    = %d   (address of a[1][0])\n", (int)*(a + 1));
        
        // Accessing of the Value
        printf("*(*(a+1)+2) = %d   (Value at a[1][2])\n\n", *(*(a+1) + 2));

        // Matrix logic
        printf("a[2][0] using pointer = %d\n", *(*(a + 2) + 0));
        printf("a[2][1] using formula = %d\n", *(*(a + 2) + 1));

        // access for linear logic
        printf("*(p+7)      = %d   (Value at a[2][1])\n", *(p+7));
        printf("*(p+8)      = %d   (Value at a[2][2])\n\n", *(p+8));

        //(Addresses printed as %d)
        printf("a[1] + 1    = %d   (address of a[1][1])\n", (int)(a[1] + 1));
        printf("&a[1] + 1   = %d   (address of row 2)\n", (int)(&a[1] + 1));
    }
    else if (choice == 2) 
    {
        //Using %u 

        printf("a           = %u   (address of row 0)\n", (unsigned int)a);
        printf("&a[0]       = %u   (address of row 0)\n", (unsigned int)&a[0]);
        printf("&a[0][0]    = %u   (address of first element)\n\n", (unsigned int)&a[0][0]);

        printf("*(p)        = %d   (first element)\n", *p);
        printf("*(p+1)      = %d   (next element)\n", *(p+1));
        printf("*(p+2)      = %d   (next element)\n", *(p+2));
        printf("*(p+3)      = %d   (next row)\n\n", *(p+3));

        printf("a + 1       = %u   (address of row 1)\n", (unsigned int)(a + 1));
        printf("*(a + 1)    = %u   (address of a[1][0])\n", (unsigned int)*(a + 1));
        
        printf("*(*(a+1)+2) = %d   (Value at a[1][2])\n\n", *(*(a+1) + 2));

        printf("a[2][0] using pointer = %d\n", *(*(a + 2) + 0));
        printf("a[2][1] using formula = %d\n", *(*(a + 2) + 1));

        printf("*(p+7)      = %d   (Value at a[2][1])\n", *(p+7));
        printf("*(p+8)      = %d   (Value at a[2][2])\n\n", *(p+8));

        printf("a[1] + 1    = %u   (address of a[1][1])\n", (unsigned int)(a[1] + 1));
        printf("&a[1] + 1   = %u   (address of row 2)\n", (unsigned int)(&a[1] + 1));
    }
    else if (choice == 3) 
    {
        //Using %p

        printf("a           = %p   (address of row 0)\n", (void*)a);
        printf("&a[0]       = %p   (address of row 0)\n", (void*)&a[0]);
        printf("&a[0][0]    = %p   (address of first element)\n\n", (void*)&a[0][0]);

        printf("*(p)        = %d   (first element)\n", *p);
        printf("*(p+1)      = %d   (next element)\n", *(p+1));
        printf("*(p+2)      = %d   (next element)\n", *(p+2));
        printf("*(p+3)      = %d   (next row)\n\n", *(p+3));

        printf("a + 1       = %p   (address of row 1)\n", (void*)(a + 1));
        printf("*(a + 1)    = %p   (address of a[1][0])\n", (void*)*(a + 1));
        
        printf("*(*(a+1)+2) = %d   (Value at a[1][2])\n\n", *(*(a+1) + 2));

        printf("a[2][0] using pointer = %d\n", *(*(a + 2) + 0));
        printf("a[2][1] using formula = %d\n", *(*(a + 2) + 1));

        printf("*(p+7)      = %d   (Value at a[2][1])\n", *(p+7));
        printf("*(p+8)      = %d   (Value at a[2][2])\n\n", *(p+8));

        printf("a[1] + 1    = %p   (address of a[1][1])\n", (void*)(a[1] + 1));
        printf("&a[1] + 1   = %p   (address of row 2)\n", (void*)(&a[1] + 1));
    }
    else 
    {
        printf("Invalid choice entered.\n");
    }
    return 0;
}