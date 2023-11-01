/*
write program for find 1st day of january of any year.
*/

#include <stdio.h>

int main()
{
    int leapdays, firstDay, yr;
    long int normalDays, totalDays;

    printf("Enter a year");
    scanf("%d", &yr);
    normalDays = (yr - 1) * 365L;

    leapdays = (yr - 1)/4 - (yr - 1)/100 + (yr - 1)/400;
    totalDays = normalDays + leapdays;
    firstDay = totalDays % 7;

    if (firstDay == 0)
    printf("monday\n");

    if (firstDay == 1)
    printf("tuesday\n");

    if (firstDay == 2)
    printf("wednesday\n");

    if (firstDay == 3)
    printf("thursday\n");

    if (firstDay == 4)
    printf("friday\n");

    if (firstDay == 5)
    printf("saturday\n");

    if (firstDay == 6)
    printf("sunday\n");

    return 0;
    
}