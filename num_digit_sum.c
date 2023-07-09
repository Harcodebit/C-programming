/*Sum of digits of 5-digit number*/

#include <stdio.h>
int main()
{
    int num;
    int sum = 0;

    printf("\nEnter five digit number:");
    scanf("%d", &num);  //input from user 5 digit number

    sum += (num%10); //5th digit
    num /= 10;

    sum += (num%10); //4th digit
    num /= 10;
    
    sum += (num%10); //3rd digit
    num /= 10;

    sum += (num%10); //2nd digit
    num /= 10;

    sum += (num%10); //1st digit


    printf("Sum of 5-digit number: %d\n", sum);

}