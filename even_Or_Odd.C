/*
Write program for verify digit is Odd/Even.
*/

#include <stdio.h>

int main()
{
    int number;

    printf("Enter any integer");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        /* code */
        printf("%d is even\n", number);
    }
    else {
        printf("%d is Odd\n", number);
    }
    
}