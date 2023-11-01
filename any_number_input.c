#include <stdio.h>

int main()
{
    int num;
    int count_p, count_n, count_z ;
    
    char choice = 'y';
    count_p = count_n = count_z = 0;

    while (choice == 'y' || choice == 'Y')
    {
        printf("Enter the number");
        scanf("%d", &num);

         printf("Do you want to continue\n");
        scanf("%c\n", &choice);
        

        if (num > 0)
        
            count_p++;
        

        if (num < 0)
        
            count_n++;
        

        if (num == 0)
        
            count_z++;
        

  

    printf("Do you want to continue\n");
        scanf("%c\n", &choice);
        
    }

    printf("The numbers of negative's is %d", count_n);
    printf("The numbers of positive's is %d", count_p);
    printf("The numbers of zero's is %d", count_z);

    return 0;
    
}