#include <stdio.h>

int main()
{
    char c = 0;

    while (c <= 255)
    {
        printf("ASCII value of %c = %d\n", c, c);
        c++;
    }
    return 0 ;
}