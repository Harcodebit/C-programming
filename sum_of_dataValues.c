#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf(
        "Enter the value of a, b, c, d: \n"
    );
    scanf("%d%d%d%d", &a, &b, &c, &d);

    int sum = a + b + c + d;

    printf("Sum of data values is : %d", sum);
}