//making program for calculate simple interest.

#include <stdio.h>

int main(){
    int p,n;
    float r, si;

    printf("Enter the value of p,n,r");
    scanf("%d %d %f", &p, &n, &r);

    //Formula of simple interest
    si = (p * n * r) / 100;

    printf("%f\n", si);

    return 0;
}