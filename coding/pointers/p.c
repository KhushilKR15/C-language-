#include <stdio.h>

int main()
{
    int a[3][3] = {
                    {10, 20, 30},
                    {40, 50, 60},
                    {70, 80, 90}
                  };

    int *p;

   p = a[0];   // p → first element (10)

    printf("a = %d   (address of row 0)\n", a);
    printf("a = %u   (address of row 0)\n", a);          
    // OUTPUT: Address of a[0] (same as &a[0]) → base of 2D array.

    printf("&a[0]   = %u   (address of row 0)\n", &a[0]);      
    // OUTPUT: Same as above → address of first row.

    printf("&a[0][0]= %p   (address of first element)\n\n", &a[0][0]);
    // OUTPUT: Same address as `a` because array starts at a[0][0].

    // ----------------------------------------------------------
    printf("*(p)       = %d   (first element) \n", *p);      
    // OUTPUT: 10  
    // Because p → a[0][0].

    printf("*(p+1)     = %d   (next element)  \n", *(p+1));  
    // OUTPUT: 20 (a[0][1])

    printf("*(p+2)     = %d   (next element)  \n", *(p+2));  
    // OUTPUT: 30 (a[0][2])

    printf("*(p+3)     = %d   (next row)      \n\n", *(p+3)); 
    // OUTPUT: 40 (a[1][0])  
    // Because row-major layout packs rows linearly.

    // ----------------------------------------------------------
    printf("a + 1      = %p (address of row 1)\n", a + 1);
    // OUTPUT: Address of a[1] (skips entire row 0 → 3 integers)

    printf("*(a + 1)   = %p (address of a[1][0])\n", *(a + 1));
    // OUTPUT: Address of 40

    printf("*(*(a+1)+2)= %d  (a[1][2])\n\n", *(*(a+1) + 2));
    // OUTPUT: 60  
    // (element of row 1, column 2)

    // ----------------------------------------------------------
    printf("a[2][0] using pointer = %d\n", *(*(a + 2) + 0));
    // OUTPUT: 70

    printf("a[2][1] using formula = %d\n", *(*(a + 2) + 1));
    // OUTPUT: 80

    // ----------------------------------------------------------
    printf("*(p+7) = %d (should be 9)\n", *(p+7));
    // Correct OUTPUT: 80  
    // (p linearizes array → index 7 is a[2][1] = 80)

    printf("*(p+8) = %d (should be 8)\n", *(p+8));
    // Correct OUTPUT: 90  
    // index 8 → a[2][2]

    // ----------------------------------------------------------
    printf("a[1] + 1 = %p (address of a[1][1])\n", a[1] + 1);
    // OUTPUT: Address of element 50

    printf("&a[1] + 1 = %p (address of row 2)\n", &a[1] + 1);
    // OUTPUT: Address of a[2]
    // Because &a[1] is a pointer to a whole row (3 ints)

    return 0;
}


