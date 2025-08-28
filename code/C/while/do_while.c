#include<stdio.h>
int main()
{
    int i = 0;

    do
    {
        printf("%d\n", i);
        i += 2; // this is like counting from 2 on 2.
    }
    while (i <= 10);
}