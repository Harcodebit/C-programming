#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 300; i++)
    {
        for (j= 2; j < i; j++)
        {
            if(j % i == 0){
                break;
            } else {
                j++;
            }

            if(j == i)
            printf("%d\n",i);

            i++;
        }
        
    }
   return 0; 
}