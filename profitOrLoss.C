#include <stdio.h>

int main()
{
    float cost_price , selling_price, profit, loss;

    scanf("%f", &cost_price);
    scanf("%f", &selling_price);

    profit = selling_price - cost_price;
    

    if (profit > 0)
    /* code */{
        printf("Seller made profit of %f\n", profit);
    }
     else
     {
        printf("Seller incurred loss of %f", - profit);
     }

    return 0;
    
}