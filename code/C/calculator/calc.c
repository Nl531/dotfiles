#include<stdio.h>
int main()
{
int x, y ,q;
char op;

scanf("%d", &x);
scanf(" %c", &op);

scanf("%d", &y);

if (op == '+')
{
    q = x + y;
}

else
{
    printf("invalid operator");

    return 1;
}

printf("\n%d %c %d = %d\n", x, op, y, q);

return 0;
}