#include <stdio.h>

int main() {
    int n = 3; // Number of elements
    int combinations = 1 << n; // 2^n combinations for n elements

    printf("All combinations of 1, 2, and 3 are:\n");

    for (int i = 0; i < combinations; i++) {
        for (int j = 0; j < n; j++) {
            if ((i & (1 << j)) != 0) {
                printf("%d ", j + 1);
            }
        }
        printf("\n");
    }

    return 0;
}
