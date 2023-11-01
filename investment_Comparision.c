#include <stdio.h>

int main()

{
    int year = 0, invest, alternate;

    while (alternate > invest)
    {
        year++;

        //yearly produce income from alternate investment
        //9% of 1000 = 90
        alternate = year * 90;

        //yearly produce income from machine
        //(1000 * year) - (investment of machine - scrap value of machine)
        // (1000 * year) - (6000 - 2000)
        invest = (1000 * year) - 4000;

    }

    printf("The life of machine: %d\n", year);
    return 0;
    
}