#include <stdio.h>
#include <math.h>

int main()
{
    double p, r, n, q, a, power;

    printf("Enter 10 sets of p, n, r & q\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("Sets %d", i);

        
        printf("Enter the principle(p) amount:");
        scanf("%lf", &p);

        printf("Enter annual rate(r) in percentage:");
        scanf("%lf", &r);

        printf("Enter no. of years(n):");
        scanf("%lf", &n);

        printf("Enter no. of times interest compounded per year(q):");
        scanf("%lf", &q);

        //Convert annual rate from percentage to decimal.
        r /= 100;

        power = pow((1 + (r/q)), (n * q));

        a = p * power;


        printf("The final amount(a) is : %lf\n", a);
    }
    return 0;
}