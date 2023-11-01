/*
Cartesian Co-ordinate to Polar Co-ordinate converter
*/

#include <stdio.h>
#include <math.h>


int main()
{
    double x, y, r, shi;

    printf("Enter the value of X coordinate:");
    scanf("%lf", &x);

    printf("Enter the value of Y coordinate:");
    scanf("%lf", &y);

    r = sqrt(x*x + y*y);
    shi = atan2(y,x);

    shi = shi * 180 / M_PI;

     printf("Polar coordinates: (r, shi) = (%.2f, %.2f degrees)\n", r, shi);

    return 0;

}