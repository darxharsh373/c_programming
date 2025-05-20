#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 3}, {6, 7, 8}, {4, 5, 6}};
    int b[3][3] = {{3, 2, 3}, {6, 9, 8}, {8, 7, 6}};
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            printf("%d", a[3][3] + b[3][3]);
        }
    }
    return 0;
}