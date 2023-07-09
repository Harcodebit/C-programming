#include <stdio.h>

int main()
{

    int number, reversednum = 0;

    printf("Enter the 5-digit number:");
    scanf("%d", &number);

    reversednum += (number % 10) * 10000;
    number /= 10;

    reversednum += (number % 10) * 1000;
    number /= 10;

    reversednum += (number % 10) * 100;
    number /= 10;

    reversednum += (number % 10) * 10;
    number /= 10;

    reversednum += (number % 10);
    
    printf("The reversed number is: %d\n", reversednum);
    
}