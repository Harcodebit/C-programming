/*
who have younger age.
*/
#include <stdio.h>
int main()
{
    float ramAge, shyamAge, ajayAge;
    printf("Enter the age of Ram\n");
    scanf("%f", &ramAge );

    printf("Enter the age of Shyam\n");
    scanf("%f", &shyamAge);

    printf("Enter the age of Ajay\n");
    scanf("%f", &ajayAge );
    
    if (ramAge <= shyamAge && ramAge <= ajayAge)
    {
        printf("The youngest one is Ram with age %f. \n", ramAge);
    } else if (shyamAge <= ramAge && shyamAge <= ajayAge)
    {
        /* code */
        printf("The youngest one is Shyam with age %f. \n", shyamAge);

    } else {
        printf("The youngest one is Ajay with age %f. \n", ajayAge);
    }
    
    

}