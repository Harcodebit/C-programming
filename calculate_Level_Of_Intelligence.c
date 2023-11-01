#include <stdio.h>

int main()
{
    double i, y, x;

    for (y = 1; y < 7; y++);
    {
        for (x = 5.5; x <= 12.5; x += 0.5)
        {
            //Calculating level of intelligence
            i = 2 + (y + (0.5*x));

            printf("%.2lf %.1lf %.2lf\n", y, x, i);
        }
        
    }

    return 0;
    
}