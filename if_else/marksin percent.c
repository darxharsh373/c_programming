#include <stdio.h>
int main() {
int n;
printf("enter n");
scanf("%d",&n);
if(n>80){
    printf("Grade A");
}
else if(n>60){
    printf("Grade B");
}
else if(n>40){
    printf("Grade C");
}
else{
    printf("Grade D");
}
return 0;
}