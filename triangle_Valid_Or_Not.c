#include <stdio.h>

int main()
{
    float Side1, Side2, Side3 ;

    printf("Enter the FirstSide");
    scanf("%f", &Side1);


    printf("Enter the SecondSide");
    scanf("%f", &Side2);


    printf("Enter the ThirdSide");
    scanf("%f", &Side3);

    
    if ((Side1 + Side2 > Side3) || (Side2 + Side3 > Side1) || (Side1 + Side3 > Side2) )
    {
        printf("Triangle is valid.\n");
    } else {
        printf("Triangle is not valid.\n");
    }
    
    return 0;
}