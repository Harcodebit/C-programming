#include <stdio.h>

int main() {
    int red, green, blue;
    float white, cyan, magenta, yellow, black;

    // Read RGB values from the user
    printf("Enter Red value (0-255): ");
    scanf("%d", &red);
    printf("Enter Green value (0-255): ");
    scanf("%d", &green);
    printf("Enter Blue value (0-255): ");
    scanf("%d", &blue);

    // Convert RGB values to the range 0.0 - 1.0
    float r = red / 255.0;
    float g = green / 255.0;
    float b = blue / 255.0;

    // Calculate white value
    white = (r > g) ? r : g;
    white = (white > b) ? white : b;

    // Calculate CMYK values
    cyan = (white - r) / white;
    magenta = (white - g) / white;
    yellow = (white - b) / white;
    black = 1 - white;

    // Display CMYK values
    printf("Cyan: %.2f\n", cyan);
    printf("Magenta: %.2f\n", magenta);
    printf("Yellow: %.2f\n", yellow);
    printf("Black: %.2f\n", black);

    return 0;
}
