#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf("  "); // Two spaces for better alignment
        }

        // Print alternating 1s and 0s
        for (j = 1; j <= i; j++) {
            if (j % 2 == 0) { // Print 0 for even j
                printf("0 ");
            } else {
                printf("1 ");
            }
        }

        printf("\n");
    }

    return 0;
}


