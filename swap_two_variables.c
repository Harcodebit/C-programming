#include <stdio.h>

int main()
{
    int c, d, temp;

    printf("Enter the value of c:");
    scanf("%d", &c);

    printf("Enter the value of d:");
    scanf("%d", &d);

    printf("before swapping\n");
    printf("C = %d\n", c);
    printf("D = %d\n", d);

    temp = c;
    c = d;
    d = temp;

    printf("After swapping\n");
    printf("C = %d\n", c);
    printf("D = %d\n", d);

}