#include <stdio.h>
#include <math.h>

int main()
{
    double angle;

    printf("Enter The angle");
    scanf("%f", &angle);

    double angleRadians = angle * (M_PI / 180);

    double sine = sin(angleRadians);
    double cose = cos(angleRadians);

    double sum_Of_Square = pow(sine, 2) + pow(cose, 2) ;


     if ((sum_Of_Square - 1.0) < 1e-6) {
        printf("The sum of squares of sine and cosine is approximately equal to 1.\n");
    } else {
        printf("The sum of squares of sine and cosine is not equal to 1.\n");
    }

    return 0;
    

}