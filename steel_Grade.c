#include <stdio.h>

int main()
{
    float hardness ;
    float carbonContent ;
    float tensileStrength ;

    printf("Enter the value of hardness");
    scanf("%f", &hardness);

    printf("Enter the value of Carbon Content");
    scanf("%f", &carbonContent);

    printf("Enter the value of Tensile Strength");
    scanf("%f", &tensileStrength);

    if (hardness >= 50 && carbonContent <= 0.7 && tensileStrength > 5600)
    {
        printf("Steel is of Grade 10");
    }
    else if (hardness >= 50 && carbonContent <= 0.7)
    {
        printf("Steel is of Grade 9");
    }
    else if (carbonContent <= 0.7 && tensileStrength > 5600)
    {
        printf("Steel is of Grade 8");
    }
    else if (hardness >= 50 && tensileStrength > 5600)
    {
        printf("Steel is of Grade 7");
    }
    else if (hardness >= 50 || carbonContent <= 0.7 || tensileStrength > 5600)
    {
        printf("Steel is of Grade 6");
    }
    else
    {
        printf("Steel is of Grade 5");
    }
    
    
    
    
    return 0;
    

}