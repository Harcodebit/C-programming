#include <stdio.h>
#include <math.h>

int main(){
    double r = 5;
    //double VOS =  4.0/3 * M_PI * pow(r, 3); //to get true value after dividing some noumbers then you have to write one number in float form.
    double aoc = M_PI * pow(r, 2);
    printf("Volume of sphere is: %f\n", aoc);
   
}