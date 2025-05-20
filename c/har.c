#include<stdio.h>
int main()
{
 int a[3][4];
 int row[3];
 int i,j;

for(i=0;i<3;i++)
{
    for(j=0;j<4;j++)
    {   
        printf("Enter array element:%d : %d\n",i,j);
        scanf("%d",&a[i][j]);
    }
}

 for (i=0;i<3;i++)
 {
    row[3]=0;
   for(j=0;j<4;j++)
   {
     row[i]=row[i]+a[i][j];
   }
 }

 for (i=0;i<3;i++)
 {
   printf("row[%d]=%d\n",i,row[i]);
 }
return 0;
}