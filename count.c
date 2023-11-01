#include <stdio.h>
int main()
{
    int num;
    int count_P, count_N, count_Z;
    count_P = count_N = count_Z = 0;

    char choice = 'y';


    while (choice == 'y' || choice == 'Y') 
    {

    printf("Enter numbers: \n");
    scanf("%d", &num);

    if (num > 0)
    {
        count_P++;
    } else if (num < 0)
    {
        count_N++;
    } else {
        count_Z++;
    }
    
    printf("Do you want to continue,choose(y/n)");
    scanf("%s", &choice);
    
        
    }
    
    printf("Count of positive number %d\n", count_P);
    printf("Count of negative numbers %d\n", count_N);
    printf("Count of zero's %d\n", count_Z);

    return 0 ;

}