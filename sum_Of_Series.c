/*
Sum of first seven terms in series((1/1!) + (2/2!) + (3/3!) + (4/4!) + ------)
*/

#include <stdio.h>

int main()
{
    int i=1,j;
    float fact, sum = 0.0;

    while (i <= 7)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        
            fact *= j;
        
        sum = sum + i/fact;
        i++;


        
    }

    printf("Sum of series = %f\n", sum);
    
}