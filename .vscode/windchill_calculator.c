#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float t, v, wcf;

    printf("Enter the temperature:");
    scanf("%f", &t);

    printf("Enter value of wind velocity:");
    scanf("%f", &v);

    wcf = 35.74 + 0.6215 * t + ( 0.4275 * t - 35.75 ) * pow(v, 0.16);

    printf("The windchill factor is : %f\n", wcf);

    return 0;
}
