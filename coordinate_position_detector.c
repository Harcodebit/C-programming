#include <stdio.h>

int main() {
    float x, y;

    printf("Enter the coordinates of the point (x,y): ");
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0) {
        printf("The point lies on the origin.\n");
    } else if (x == 0) {
        printf("The point lies on the Y-axis.\n");
    } else if (y == 0) {
        printf("The point lies on the X-axis.\n");
    } else {
        printf("The point does not lie on the X-axis, Y-axis, or origin.\n");
    }

    return 0;
}
