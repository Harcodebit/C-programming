#include <stdio.h>

int main()
{
    int ch;

    printf("Enter the character.\n");
    scanf("%d", &ch);

    if (ch >= 65 && ch <= 90)
    {
        printf("You entered a Capital letter.\n");
    } else if (ch >= 97 && ch <= 122)
    {
        printf("You entered a small letter.\n");
    }else if (ch >= 48 && ch <= 57)
    {
        printf("You entered a digit.\n");
    }else if ((ch >= 0 && ch <= 47)
        || (ch >= 58 && ch<= 64)
        || (ch >= 91 && ch <= 96)
        || (ch >= 123 && ch <= 127))
    {
        printf("You entered a Special Symbol.\n");
    } else {
        printf("You entered an invalid character.\n");
    }
    
    
    return 0;
    
}