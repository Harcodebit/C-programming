/*
write a program to see year is normal or leap year.
*/

#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year");
    scanf("%d", &year);

    // if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    // {
    //     /* code */
    //     printf("%d is leap year", year);
    // } 
    // else
    // {
    //     printf("%d is not leap year", year);
    // }
    
    
    //Using Conditional Operator.
    int leapYear = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ?   printf("%d is leap year", year) : printf("%d is not leap year", year);

    return 0;

}