#include <stdio.h>
#include <math.h>

int main()
{
    int  originalNum = 1, a, b, c ;

    printf("print all armstrong number between 0 & 500 are\n");

   

    while (originalNum <= 500)
    {
        a = originalNum % 10 ;
        b = originalNum % 100;
        b = (b - a) / 10;
        c = originalNum /100;

        if ((a * a * a) + (b * b * b) + (c * c * c) == originalNum)
         printf("%d\n", originalNum);
         
        originalNum++;

    }
    
 return 0;
}