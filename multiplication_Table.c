#include <stdio.h>

int main()

{
    int i, multiplication;
    int num ;

    printf("Enter the number\n");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        multiplication = num * i;
        printf("The multiplication of %d and %d: %d\n", num, i, multiplication);
    }

    return 0;
    
}