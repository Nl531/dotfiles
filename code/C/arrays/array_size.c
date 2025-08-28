#include<stdio.h>
int main()
{
    int myNumbs[] = {1, 2, 3, 4, 5};
    printf("%zu\n", sizeof(myNumbs));
    // this gives 20 because it sizeof gives the result
    //  of the byte value of an int multiplied for the number
    // of elements from the array (4 x 5 = 20).
}