#include <stdio.h>

int main()
{
    float weight; //Weight in pounds

    printf("Enter the Weight");
    scanf("%f", &weight);

    if (weight < 115)
    {
        printf("The Boxer's weight class is Flyweight.\n");
    } 
    else if (weight >= 115 && weight <= 121)
    {
        printf("The Boxer's weight class is Bantamweight.\n");
    }
    else if (weight >= 122 && weight <= 153)
    {
        printf("The Boxer's weight class is Featherweight.\n");
    }
    else if (weight >= 154 && weight <= 189)
    {
        printf("The Boxer's weight class is Middleweight.\n");
    }
    else if (weight >= 190)
    {
        printf("The Boxer's weight class is Heavyweight.\n");
    }
    else
    {
        printf("Invalid Weight class");
    }
    
    
    
    
    

}