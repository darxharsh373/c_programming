#include <stdio.h>
int main()
{
    int i;
    int a[5];
    printf("enter a aaray");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("the array is %d\n", a[i]);
    }
}
