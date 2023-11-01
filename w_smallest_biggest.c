#include <stdio.h>

int main()
{
    int n, num;
    int smallest, largest;

    printf("Enter the number of elements:");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid input, please enter positive number of elements.");
        return 1;
    } 

    printf("Enter %d numbers", n);
    scanf("%d", &num);
    
    smallest = largest = num;

    int count = 1;

    while (count < n)
    {

        scanf("%d", &num);

        if (num < smallest)
        {
            smallest = num;
        }
        
        if (num > largest)
        {
            largest = num;
        }
        
        count++;

    }

    int range = largest - smallest;

    printf("The range of the entered number is: %d\n", range);
    

    return 0;

}