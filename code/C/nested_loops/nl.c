#include<stdio.h>
int main()
{
    int i, j;

    for (i = 1; i <= 2; ++i)
    {
        printf("Outer: %d\n", i); // the inner loop is gonna repeat "x" times the outer loop is compared to (in this
                                  // case is 2 * 3 because "i <= 2;".
    
    for (j = 1; j <= 3; ++j)
    {
        printf("Inner: %d\n", j);
    }
    }
}