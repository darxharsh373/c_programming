#include<stdio.h>
int main()
{
int a[3][3];
int b[3][3];
int i,j;

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("Enter array element:a:%d:%d:",i,j);
        scanf("%d",&a[i][j]);
    }
}
 ``````````
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("Enter array element:b:%d:%d:",i,j);
        scanf("%d",&b[i][j]);
    }
}

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d\t",(a[i][j])+(b[i][j]));
        
    }
    printf("\n");
}

return 0;
}