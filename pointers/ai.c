#include <stdio.h>

#define MAX_SIZE 10
int main() 
{
    int a[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    int i, j;
    printf("============================================\n");
    printf("        STEP 1: CREATE YOUR MATRIX          \n");
    printf("============================================\n");
    printf("Enter number of ROWS (max %d): ", MAX_SIZE);
    scanf("%d", &rows);
    printf("Enter number of COLS (max %d): ", MAX_SIZE);
    scanf("%d", &cols);
    if (rows > MAX_SIZE || cols > MAX_SIZE || rows < 1 || cols < 1) 
    {
        printf("Invalid size! Please restart and keep it within 1-%d.\n", MAX_SIZE);
        return 1;
    }
    printf("\nEnter the values for the matrix:\n");
    for(i = 0; i < rows; i++) 
    {
        for(j = 0; j < cols; j++) 
        {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n============================================\n");
    printf("        STEP 2: VISUALIZE MATRIX            \n");
    printf("============================================\n");
    printf("Here is the matrix you created:\n\n");
    for(i = 0; i < rows; i++) {
        printf("  Row %d:  [ ", i);
        for(j = 0; j < cols; j++) {
            printf("%3d ", a[i][j]);
        }
        printf("]\n");
    }
    printf("\n");
    int *p;
    int ptr_r, ptr_c;
    printf("============================================\n");
    printf("        STEP 3: CONFIGURE POINTER 'p'       \n");
    printf("============================================\n");
    printf("Where should pointer 'p' point to?\n");
    do 
    {
        printf("Enter Row index (0 to %d): ", rows-1);
        scanf("%d", &ptr_r);
    } while(ptr_r < 0 || ptr_r >= rows);
    do 
    {
        printf("Enter Col index (0 to %d): ", cols-1);
        scanf("%d", &ptr_c);
    } while(ptr_c < 0 || ptr_c >= cols);
    p = &a[ptr_r][ptr_c];
    printf("\n[STATUS] Pointer 'p' is set to address of a[%d][%d].\n", ptr_r, ptr_c);
    printf("[STATUS] The value inside that address is: %d\n\n", *p);
    int choice;
    printf("============================================\n");
    printf("        STEP 4: WHAT DO YOU WANT TO SEE?    \n");
    printf("============================================\n");
    
    printf("1. The Value of variable 'a' (Base address of array)\n");
    printf("2. The Address of variable 'a' (&a)\n");
    printf("3. The Value held inside 'p' (Address p is pointing to)\n");
    printf("4. The Address of variable 'p' (Where p itself lives)\n");
    printf("5. The Value pointed to by 'p' (The actual number)\n");
    
    printf("\nEnter your choice (1-5): ");
    scanf("%d", &choice);

    printf("\n---------------- RESULT ----------------\n");

    switch (choice) 
    {
        case 1:
            printf("DESCRIPTION : 'a' is the label for the array. It decays to the address of Row 0.\n");
            printf("SYNTAX USED : a\n");
            printf("OUTPUT      : %p\n", (void*)a);
            break;
        case 2:
            printf("DESCRIPTION : The explicit memory address of the entire array block.\n");
            printf("SYNTAX USED : &a\n");
            printf("OUTPUT      : %p\n", (void*)&a);
            break;

        case 3:
            printf("DESCRIPTION : The address currently stored inside 'p'.\n");
            printf("              (You set this to point to a[%d][%d])\n", ptr_r, ptr_c);
            printf("SYNTAX USED : p\n");
            printf("OUTPUT      : %p\n", (void*)p);
            break;

        case 4:
            printf("DESCRIPTION : The memory address where the pointer variable 'p' sits.\n");
            printf("              (This is separate from the array's memory!)\n");
            printf("SYNTAX USED : &p\n");
            printf("OUTPUT      : %p\n", (void*)&p);
            break;

        case 5:
            printf("DESCRIPTION : The integer value found at the address 'p' is holding.\n");
            printf("SYNTAX USED : *p\n");
            printf("OUTPUT      : %d\n", *p);
            break;
        default:
            printf("Invalid choice.\n");
    }
    printf("----------------------------------------\n");
    return 0;
}