#include <stdio.h>
#include <math.h>

int main()
{
    float weight, height;

    printf("Enter the weight");
    scanf("%f", &weight);

    printf("Enter the height (in meters)"); 
    scanf("%f", &height);

    float BMI = weight / pow(height, 2);

    if (BMI < 15)
    {
        printf("The person BMI category is STARVATION");
    }
    else if (BMI >= 15.1 && BMI <= 17.5)
    {
        printf("The person BMI category is ANOREXCI");
    }
    else if (BMI >= 17.6 && BMI <= 18.5)
    {
        printf("The person BMI category is UNDERWEIGHT");
    }
    else if (BMI >= 18.6 && BMI <= 24.9)
    {
        printf("The person BMI category is IDEAL");
    }
    else if (BMI >= 25 && BMI <= 25.9)
    {
        printf("The person BMI category is OVERWEIGHT");
    }
    else if (BMI >= 30 && BMI <= 30.9)
    {
        printf("The person BMI category is OBESE");
    }
    else if (BMI >= 40)
    {
        printf("The person BMI category is MORBIDLY OBESE");
    } 
    else
    {
        printf("Invaid! BMI");
    }
    
    
    
    
    
}