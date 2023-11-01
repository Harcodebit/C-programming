#include <stdio.h>

int main()
{


    int originalNum, reverseNum = 0;

    printf("Enter the 5-digit originalNum:");
    scanf("%d", &originalNum);

    reverseNum += (originalNum % 10) * 10000;
    originalNum /= 10;

    reverseNum += (originalNum % 10) * 1000;
    originalNum /= 10;

    reverseNum += (originalNum % 10) * 100;
    originalNum /= 10;

    reverseNum += (originalNum % 10) * 10;
    originalNum /= 10;

    reverseNum += (originalNum % 10);
    
    printf("The reversed num is: %d\n", reverseNum);

    if (originalNum == reverseNum){
    printf("The orginal originalNum and reversed originalNum are equal\n");
    } else {
        printf("The orginal originalNum and reversed originalNum are not equal\n");
    }
    
    return 0;
}