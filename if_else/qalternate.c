#include<stdio.h>
int main()
{
    int n=4;
    int i,k,j;
    //printf("enter number \n");
    //scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for (k=1;k<=2*i-1;k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    for (i=n-1;i>=1;i--)
    {
        for (j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for (k=1;k<=2*i-1;k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }return 0;
}