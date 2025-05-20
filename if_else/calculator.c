#include<stdio.h>
int main()
{
    char op;
        printf("enter an operator '+,-,*,/'and '=' to terminate :\n ");
        scanf("%c",&op);
    while(op!= '=')
    {
    float a,b;
        printf("enter 1st number :  \n");
        scanf("%f",&a);
        printf("enter 2nd number :  \n");
        scanf("%f",&b);
        if(op== '+')
        printf("sum of %f and %f is %f ",a,b,a+b);
        else if(op== '-')
        printf("substraction  of %f and %f is %f ",a,b,a-b);
        else if(op== '*')
        printf("multiplication of %f and %f is %f ",a,b,a*b);
        else if(op== '/')
        printf("division of %f and %f is %f ",a,b,a/b);
        else
        printf("\nwrong opertaor \n");
        //printf("\nenter an operator '+,-,*,/'and '=' to terminate :\n "); 
         scanf("%c",&op);
         scanf("%c",&op);
    }
        if(op== '=')
        {
        printf("calculation terminated \n ");
        }
        return 0;
}