#include <stdio.h>
typedef struct 
{
    int kilograms;
    int grams;
} Weight;
Weight addWeights(Weight w1, Weight w2);
Weight subtractWeights(Weight w1, Weight w2);
void displayWeight(Weight w);
int main() 
{
    Weight w1, w2, sum, diff;
    printf("Enter Weight 1 (kg and g): ");
    scanf("%d %d", &w1.kilograms, &w1.grams);
    printf("Enter Weight 2 (kg and g): ");
    scanf("%d %d", &w2.kilograms, &w2.grams);
    sum = addWeights(w1, w2);
    printf("\nSum Result: ");
    displayWeight(sum);
    diff = subtractWeights(w1, w2);
    printf("Difference Result: ");
    displayWeight(diff);
    return 0;
}
Weight addWeights(Weight w1, Weight w2) 
{
    Weight result;
    result.grams = w1.grams + w2.grams;
    result.kilograms = w1.kilograms + w2.kilograms;
    if (result.grams >= 1000) {
        result.kilograms += result.grams / 1000;
        result.grams = result.grams % 1000;
    }
    return result;
}
Weight subtractWeights(Weight w1, Weight w2) 
{
    Weight result;
    if (w1.grams < w2.grams) 
    {
        w1.grams += 1000;    
        w1.kilograms -= 1;     
    }

    result.grams = w1.grams - w2.grams;
    result.kilograms = w1.kilograms - w2.kilograms;

    return result;
}
void displayWeight(Weight w) 
{
    printf("%d kg %d g\n", w.kilograms, w.grams);
}