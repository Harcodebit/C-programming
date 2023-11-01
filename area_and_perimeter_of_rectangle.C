/*
This program calculates Area and Perimeter of Rectangle.
*/

#include <stdio.h>

int main()
{
    float length, breadth;

    printf("Enter the length of Rectangle");
    scanf("%f", &length);

    printf("Enter the breadth of Rectangle");
    scanf("%f", &breadth);

    float area_Of_Rectangle = length * breadth;
    float perimeter_Of_Rectangle = 2*(length + breadth);

    if (area_Of_Rectangle > perimeter_Of_Rectangle)
    {
        printf("Area of Rectangle %f is greater than Perimeter Of Rectangle %f \n", area_Of_Rectangle, perimeter_Of_Rectangle);
    }
    

}