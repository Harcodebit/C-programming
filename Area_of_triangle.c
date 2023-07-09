#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, S;

    printf("Enter triangle's length of 3 three sides:");
    scanf("%f %f %f", &a, &b, &c);

    S = (a + b + c)/2;
     float area_of_tri = sqrt(S * (S-a) * (S-b) * (S-c));

     printf("The area of triangle is: %f\n", area_of_tri);

}