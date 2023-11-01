#include <stdio.h>

int main(){
    int R1, R2, R5, R10, R50, R100, sumOfRupees;

    printf("Enter the sumOfrupees: \n");
    scanf("%d", &sumOfRupees);

    // Number of notes 100
    R100 = sumOfRupees / 100;
    sumOfRupees = sumOfRupees % 100;

    // Number of notes 50
    R50 = sumOfRupees / 50;
    sumOfRupees = sumOfRupees % 50;

    // Number of notes 10
    R10 = sumOfRupees / 10;
    sumOfRupees = sumOfRupees % 10;

    // Number of notes 5
    R5 = sumOfRupees / 5;
    sumOfRupees = sumOfRupees % 5;

    // Number of notes 2
    R2 = sumOfRupees / 2;
    sumOfRupees = sumOfRupees % 2;

     // Number of notes 1
    R1 = sumOfRupees / 1;

    printf("sum of 100 rupees note is: %d\n", R100);
    printf("sum of 50 rupees note is: %d\n", R50);
    printf("sum of 10 rupees note is: %d\n", R10);
    printf("sum of 5 rupees note is: %d\n", R5);
    printf("sum of 2 rupees note is: %d\n", R2);
    printf("sum of 1 rupees note is: %d\n", R1);

    return 0;


}