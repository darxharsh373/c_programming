#include <stdio.h>
int multiply(int a,int b){
    return a*b;
}
int main() {
int x,y;
printf("enter x:\n");
scanf("%d",&x);
printf("enter y:\n");
scanf("%d",&y);
printf("the multiply of %d and %d is :%d",x,y,multiply(x,y));
return 0;
}