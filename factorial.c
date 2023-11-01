#include <stdio.h>

int main()
{
    int num, i=1;
    long fact = 1;

    printf("Enter the number.\n");
    scanf("%d", &num);

    
    if(num < 0){
        printf("Number is negative.\n");
    } else {
        while (i <= num)
        {
           
         fact = fact * i;
         i++;
        }
        
        printf("factorial of %d is %ld\n", num, fact);

    
    }
    return 0 ;
}