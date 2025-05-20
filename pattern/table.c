#include <stdio.h>
int main() {
int i,n,r;
printf("enter th number to find its table:");
scanf("%d",&n);
printf("enter its times:");
scanf("%d",&r);
for(i=1;i<=r;i++){
    printf("%d*%d=%d\n",n,i,n*i);
}
return 0;
}