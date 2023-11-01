#include <stdio.h>

int main()
{
    float Side1, Side2, Side3;

     printf("Enter the FirstSide");
    scanf("%f", &Side1);


    printf("Enter the SecondSide");
    scanf("%f", &Side2);


    printf("Enter the ThirdSide");
    scanf("%f", &Side3);

    if (Side1 == Side2 == Side3){
        printf("Triangle is an equilateral triangle.\n");
    } 
    else if ((Side1 == Side2) || (Side2 == Side3) || (Side1 == Side3)){
        printf("Triangle is an isosceles triangle.\n");
    }
     else {
        printf("Triangle is scalene triangle.\n");
    }
    
    return 0;
}