#include <stdio.h>

int main() {
    int decimalNum, octalNum = 0, placeValue = 1;

    printf("Enter an integer: ");
    scanf("%d", &decimalNum);

    if (decimalNum < 0) {
        printf("Octal representation is not defined for negative numbers.\n");
    } else if (decimalNum == 0) {
        printf("Octal equivalent of 0 is 0\n");
    } else {
        while (decimalNum > 0) {
            int remainder = decimalNum % 8;
            octalNum = octalNum + remainder * placeValue;
            decimalNum = decimalNum / 8;
            placeValue = placeValue * 10;
        }

        printf("Octal equivalent is: %d\n", octalNum);
    }

    return 0;
}
