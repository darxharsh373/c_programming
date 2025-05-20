#include<stdio.h>
void bubblesort(int arr[],int nm)
{
    int i,j;
    for(i=0;i<nm;i++)
    {
        for (j=0;j<=nm-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n,i;
    printf("enter size 1st of array :\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elments of 1st array in shorted form :\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int m;
    printf("enter size of 2nd array :\n");
    scanf("%d",&m);
    int b[m];
    printf("enter the elments of 2nd array in shorted form :\n");
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
    int z=n+m;
        int c[z];
  for(i=0;i<n;i++)
    c[i]=a[i];
    for(int j=0;j<m;j++)
    {
     c[i]=b[j];
     i++;
    }
  bubblesort(c,z);
        printf("\n merged array is :\n");
        for(i=0;i<z;i++)
            printf("%d\t",c[i]);
return 0;
}