/*
length converter
*/

#include <stdio.h>

int main()
{
    float dbc, dbcm, dbcft, dbcin, dbccm;       
 /*
     dbc = Distance between cities.
     dbcm = dbc in meters.
     dbcft = dbc in foot.
     dbcin = dbc in inches.
     dbccm = dbc in centimeters.
 */

    printf("Enter distance between 2 cities in Kilometer:");
    scanf("%f", &dbc);

    //Conversion factors
    dbcm = dbc * 1000; 
    dbcft = dbc * 3280.84;
    dbcin = dbc * 39370.1;
    dbccm = dbc * 100000;

    printf("dbc in meters, foot, inches, centimeters:\n %f\n %f\n %f\n %f\n", dbcm, dbcft, dbcin, dbccm);

    return 0;
}