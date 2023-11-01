#include <stdio.h>
#include <math.h>

int main() {
    double x;
    double sum = 0;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    if (x <= 0) {
        printf("x should be greater than 0 for this series.\n");
    } else {
        for (int i = 1; i <= 7; i++) {
            sum += (1.0 / i) * pow((x - 1) / x, i);
        }

        printf("The sum of the first seven terms of the series is: %.6lf\n", sum);
    }

    return 0;
}
