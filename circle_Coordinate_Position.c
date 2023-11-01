#include <stdio.h>
#include <math.h>

int main() {
    double x, y, radius, x1, y1, distance;

    printf("Enter the coordinates of the center of the circle (x,y): ");
    scanf("%lf %lf", &x, &y);

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    printf("Enter the coordinates of the point (x1,y1): ");
    scanf("%lf %lf", &x1, &y1);

    // Calculate the distance between the center of the circle and the point
    distance = sqrt(pow(x1 - x, 2) + pow(y1 - y, 2));

    if (distance < radius) {
        printf("The point lies inside the circle.\n");
    } else if (distance == radius) {
        printf("The point lies on the circle.\n");
    } else {
        printf("The point lies outside the circle.\n");
    }

    return 0;
}
