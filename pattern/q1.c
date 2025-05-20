#include <stdio.h>
int main() {
    int x,y;
    printf("enter no. of rows");
    scanf("%d",&x);
    printf("enter no. of column");
    scanf("%d",&y);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            printf("*");
        }
        printf("\n");
    }

return 0;
}