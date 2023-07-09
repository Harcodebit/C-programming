#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    float theta;

    printf("Enter value of theta:");
    scanf("%f", &theta);

    theta = theta * M_PI / 180;

    float a = sin(theta);
    float b = cos(theta);
    float c = tan(theta);
    float d = 1/tan(theta);
    float e = 1/cos(theta);
    float f = 1/sin(theta);

    printf("The value of sin(theta) = %f\n", a);

    printf("The value of cos(theta) = %f\n", b);
    
    printf("The value of tan(theta) = %f\n", c);

    printf("The value of cot(theta) = %f\n", d);

    printf("The value of sec(theta) = %f\n", e);

    printf("The value of cosec(theta) = %f\n", f);

    return 0;
}
