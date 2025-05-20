#include <stdio.h>
void lcm(int x, int y)
{
    int i;
    for (i = x > y ? x : y; i <= x * y; i++)
    {
        if (i % x == 0 && i % y == 0)
            break;
    }
    printf("LCM of two number is :- %d", i);
}
int main()
{
    int a, b;
    printf("Enter two numbers :- ");
    scanf("%d %d", &a, &b);
    lcm(a, b);
    return 0;
}