#include<stdio.h>
int main()
{
    // Every year that is exactly divisible by four is a leap year, except 
    // for years that are exactly divisible by 100, but these centurial years
    // are leap years if they are exactly divisible by 400. 
    // For example, the years 1700, 1800,2100 and 1900 are not leap years,
    // but the years 1600 and 2000 are.

    int year;
    printf("enter the year : ");
    scanf("%d",&year);


    if ((year % 4 == 0 && year%100 != 0) || (year%400 == 0 ))
    {
        printf(" %d is leap year !",year);
    }
    else
    {
        printf(" %d is not a leap year !",year);
    }
    
    return 0;
}
