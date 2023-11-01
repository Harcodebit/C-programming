#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the number a");
    scanf("%d", &a);


    printf("Enter the number b");
    scanf("%d", &b);


    printf("Enter the number c");
    scanf("%d", &c);

    int greatestOfThree = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The greatest no. is %d.\n", greatestOfThree);

    return 0;

}