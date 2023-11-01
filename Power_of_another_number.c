#include <stdio.h>
#include <math.h>

int main()
{
    long num1, num2, i = 1;
    int power = 1;

    printf("Enter value of num1\n");
    scanf("%ld", &num1);

    printf("Enter value of num2\n");
    scanf("%ld", &num2);

    while (i <= num2)
    {
        power *= num1;
        i++;
    }
    printf("%ld to the power of %ld is %d", num1, num2, power);
    
    return 0;
}