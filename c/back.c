#include <stdio.h>
int main()
{
 int start year,i, end year;
printf("enter start year searching l.p");
scanf ("%d",& start year);

printf (" enter end year searching l.p ");
scanf(" %d", & end year);

printf (" leap years between %d to %d are : \n",& start year, & end year);
 for (i= start year; i<= end year; i++)
{
 if ( i%4==0 && i%400==0 || i%100!==0)
 {
 printf ("%d",& i);
 }
return 0;
}
    
}