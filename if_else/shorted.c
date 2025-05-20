#include <stdio.h>
int binarysearch(int arr[], int n ,int key)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if (arr[j] ==key)
            {
                return j;
                break;
            }
        }
    }
    return -1;
}
void bubblesort(int arr[],int n)
{
    int i,j,count;
    for(i=0;i<n-1;i++)
    {
        count=0;
        for (j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                count=1;
            }
        }
        if(count==0)
        break;
    }
    return ;
}
int main() {
    int i,j,n,key;
    printf("enter the size of an array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element of an array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter array is");
    for(i=0;i<n;i++)
    
     printf("%d\t",arr[i]);

    bubblesort(arr,n);
    printf("\nshorted array is:");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
    printf("\nenter the element to search");
    scanf("%d",&key);
    int s= binarysearch(arr,n,key);
    if(s!=-1)
    
        printf("element found at  index %d ",s+1);
    
    else
        printf("element not found");
    
    return 0;
}