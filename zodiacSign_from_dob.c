#include <stdio.h>

int main()

{
    int month, date;

    printf("Enter the month");
    scanf("%d", &month);

    printf("Enter the date");
    scanf("%d", &date);

    if ((month == 1 && date >= 20) || (month == 2 && date <= 17))
    {
        printf("Zodiac sign is Aquarices.\n");
    } else if ((month == 2 && date >= 18) || (month == 3 && date <= 19))
    {
        printf("Zodiac sign is pisces.\n");
    } 
     else if ((month == 3 && date >= 20) || (month == 4 && date <= 19))
    {
        printf("Zodiac sign is Aries.\n");
    }
     else if ((month == 4 && date >= 20) || (month == 5 && date <= 20))
    {
        printf("Zodiac sign is Taurus.\n");
    }
     else if ((month == 5 && date >= 21) || (month == 6 && date <= 20))
    {
        printf("Zodiac sign is Gemini.\n");
    }
     else if ((month == 6 && date >= 21) || (month == 7 && date <= 22))
    {
        printf("Zodiac sign is Cancer.\n");
    }
     else if ((month == 7 && date >= 23) || (month == 8 && date <= 22))
    {
        printf("Zodiac sign is Leo.\n");
    }
     else if ((month == 8 && date >= 23) || (month == 9 && date <= 22))
    {
        printf("Zodiac sign is virgo.\n");
    }
     else if ((month == 9 && date >= 23) || (month == 10 && date <= 22))
    {
        printf("Zodiac sign is Libra.\n");
    }
     else if ((month == 10 && date >= 23) || (month == 11 && date <= 21))
    {
        printf("Zodiac sign is Scorpio.\n");
    }
     else if ((month == 11 && date >= 22) || (month == 12 && date <= 21))
    {
        printf("Zodiac sign is Sagittarius.\n");
    }
     else if ((month == 12 && date >= 22) || (month == 1 && date <= 19))
    {
        printf("Zodiac sign is Capricon.\n");
    } 
    else
    {
        printf("Invalid date.\n");
    }
    

    
}