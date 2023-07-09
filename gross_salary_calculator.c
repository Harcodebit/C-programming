#include <stdio.h>

int main()
{
    int bs;                     /*bs = basic salary*/
    
    printf("Enter your Basic Salary:");
    scanf("%d", &bs);

    int da = (40*bs)/100;       /*da = dearness allowan*/
    int hra = (20*bs)/100;      /*hra = house rent allowance*/
    int gs = bs + da + hra;     /*gs = Gross Salary*/

    printf("Your Gross Salary: %d\n", gs);

}