/*
This program checks triangle is valid or not.
*/

#include  <stdio.h>

int main()
{
    float angle1, angle2, angle3;

    printf("Enter 1st angle value");
    scanf("%f", &angle1);

    printf("Enter 2nd angle value");
    scanf("%f", &angle2);

    printf("Enter 3rd angle value");
    scanf("%f", &angle3);

    int angleSum = angle1 + angle2 + angle3;
    if (angleSum == 180)
    {
        printf("triangle is valid.\n");
    } else {
        printf("Triangle is invalid.\n");
    }

    return 0;
    
}