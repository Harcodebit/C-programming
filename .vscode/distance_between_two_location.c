/*
Distance between two locations with help of longitude and latitude of both locations.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double L1, L2, G1, G2;

    printf("Enter value of latitude1:"); //Latitude of 1st location
    scanf("%lf", &L1);

    printf("Enter value of longitude1:"); //Longtitude of 1st location
    scanf("%lf", &G1);

    printf("Enter value of latitude2:"); //Latitude of 2nd location
    scanf("%lf", &L2);

    printf("Enter value of longitude1:"); //Longtitude of 2nd location
    scanf("%lf", &G2);

    L1 = L1 * M_PI / 180;
    L2 = L2 * M_PI / 180;
    G1 = G1 * M_PI / 180;
    G2 = G2 * M_PI / 180;

    double Distance = 3963 * acos(sin(L1) * sin(L2)  + cos(L1) * cos(L2) * cos(G2-G1));

    printf("Distance between the two locations is %.2f\n", Distance);

    return 0;
}