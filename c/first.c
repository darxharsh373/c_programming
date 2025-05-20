#include <stdio.h>
int sum(int a,int b){
    return a+b;
}

int main() {
int x,y;
printf("enter x:\n");
scanf("%d",&x);
printf("enter y:\n");
scanf("%d",&y);
printf("the sum of %d and %d is :%d",x,y,sum(x,y));
return 0;
}